#include "a85.h"

#ifndef __UTILSH__
#define __UTILSH__

void EnterCriticalSection(u32 *cs);
int TryEnterCriticalSection(u32 *cs);
void LeaveCriticalSection(u32 *cs);
void InitializeCriticalSection(u32 *cs);

#endif
