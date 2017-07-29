#ifndef UTIL_H
#define UTIL_H

#include <assert.h>

typedef char* string;
string String(char *);

typedef char bool;
#define TRUE  1
#define FALSE 0


void* checked_malloc(int);


#endif /* UTIL_H */
