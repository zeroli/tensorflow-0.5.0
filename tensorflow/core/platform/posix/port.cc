#include "tensorflow/core/platform/port.h"
#if defined(__linux) && !defined(__ANDROID__)
#include <sched.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef SNAPPY
#include <snappy.h>
#endif

namespace tensorflow {
namespace port {

void InitMain(const char* usage, int* argc, char*** argv) {}

string Hostname() {
  char hostname[1024] = "unknown";
  //gethostname(hostname, sizeof hostname);
  hostname[sizeof hostname - 1] = 0;
  return string(hostname);
}

int NumSchedulableCPUs() {
#if defined(__linux) && !defined(__ANDROID__)
  cpu_set_t cpuset;
  if (sched_getaffinity(0, sizeof(cpu_set_t), &cpuset) == 0) {
    return CPU_COUNT(&cpuset);
  }
  perror("sched_getaffinity");
#endif
  const int kDefaultCores = 4;  // Semi-conservative guess
  fprintf(stderr, "can't determine number of CPU cores: assuming %d\n",
          kDefaultCores);
  return kDefaultCores;
}

void* aligned_malloc(size_t size, int minimum_alignment) {
#if defined(__ANDROID__)
  return memalign(minimum_alignment, size);
#else  // !__ANDROID__
  void* ptr = NULL;
  // posix_memalign requires that the requested alignment be at least
  // sizeof(void*). In this case, fall back on malloc which should return
  // memory aligned to at least the size of a pointer.
  const int required_alignment = sizeof(void*);
  if (minimum_alignment < required_alignment) return malloc(size);
#if 1
  return _aligned_malloc(size, minimum_alignment);
#else
  if (posix_memalign(&ptr, minimum_alignment, size) != 0)
    return NULL;
  else
    return ptr;
#endif
#endif
}

void aligned_free(void* aligned_memory) { _aligned_free(aligned_memory); }

void AdjustFilenameForLogging(string* filename) {
  // Nothing to do
}

bool Snappy_Compress(const char* input, size_t length, string* output) {
#ifdef SNAPPY
  output->resize(snappy::MaxCompressedLength(length));
  size_t outlen;
  snappy::RawCompress(input, length, &(*output)[0], &outlen);
  output->resize(outlen);
  return true;
#else
  return false;
#endif
}

bool Snappy_GetUncompressedLength(const char* input, size_t length,
                                  size_t* result) {
#ifdef SNAPPY
  return snappy::GetUncompressedLength(input, length, result);
#else
  return false;
#endif
}

bool Snappy_Uncompress(const char* input, size_t length, char* output) {
#ifdef SNAPPY
  return snappy::RawUncompress(input, length, output);
#else
  return false;
#endif
}

}  // namespace port
}  // namespace tensorflow
