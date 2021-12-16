#ifndef GREETING_H
#define GREETING_H

typedef int (*printf_ptr) (char const *str, ...);
void greeting_init (printf_ptr p);
int greeting_print (char *you);

#endif //GREETING_H