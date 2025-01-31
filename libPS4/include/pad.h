#pragma once

#ifndef PAD_H
#define PAD_H

#include "types.h"

extern int (*scePadInit)(void);
extern int (*scePadOpen)(int userID, int, int, void *);
extern int (*scePadClose)(int handle);
extern int (*scePadRead)(int handle, void *data, int count);
extern int (*scePadReadState)(int handle, void *data);
extern int (*scePadSetUserColor)(int appId, int userColor);

void initPad(void);

#endif
