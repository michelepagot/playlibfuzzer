#include <stdio.h>
#include "greeting.h"

#if defined(BUILD_FUZZER)
#include <stdint.h>
int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size)
{
  return 0;
}
#else
int main (int argc, char *argv[])
{
  if(1 == argc)
  {
    greeting_print("ANONYMOUS");
  }
  else if(2 == argc)
  {
    greeting_print(argv[1]);
  }
  else
  {
    printf("Only support 0 or 1 argument, provided %d", argc);
    return 1;
  }
  return 0;
  
}
#endif
