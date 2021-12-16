#include <stdio.h>
#include "greeting.h"

#if defined(BUILD_FUZZER)
// When fuzzing do not printf on the stdout not to 
// interfere with libfuzzer stdout
int no_print(const char *, ...)
{
  return 0;
}

#include <stdint.h>

int LLVMFuzzerInitialize(int *argc, char ***argv)
{
  greeting_init(no_print);
  return 0;
}

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
  greeting_print((char *)Data);
  return 0;
}
#else
int main (int argc, char *argv[])
{
  greeting_init(printf);
  if(1 == argc)
  {
    return greeting_print("ANONYMOUS");
  }
  
  if(2 == argc)
  {
    return greeting_print(argv[1]);
  }
  
  printf("Only support 0 or 1 argument, provided %d", argc);
  return 1;
}
#endif
