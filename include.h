#ifndef INCLUDE_H
#define INCLUDE_H

#ifdef __APPLE__
#else
#include <dispatch/dispatch.h>
typedef int SInt32;
#endif
#endif