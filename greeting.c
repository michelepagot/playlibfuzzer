#include "greeting.h"
#include <stdio.h>
#include <string.h>

static printf_ptr gP = 0;

void greeting_init (printf_ptr p)
{
  gP = p;
}

#define GREETING_SIZE 10
int greeting_print (char *you)
{
  if(0 == gP)
  {
    return -1;
  }

  if(0 == you)
  {
    gP("Hello dear None!!!\n");
  }
  else if(0 == *you)
  {
    gP("Hello dear Zero!!!\n");
  }
  else
  {
    char fix_size_greeting[GREETING_SIZE];

    snprintf(fix_size_greeting, sizeof(fix_size_greeting), "%s", you);
    gP("Hello dear %s!!!\n", fix_size_greeting);
  }
  return 0;
}