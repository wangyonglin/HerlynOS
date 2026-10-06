#ifndef __KERNAL_ASSENT_H__
#define __KERNAL_ASSENT_H__

#include "heylin/kernel/string.h"

#ifdef HL_USE_DEBUG
#define ASSENT(cond)  do{ if(!(cond)){ HL_AssertFailed(__FILE__, __LINE__); } }while(0)
#else
#define ASSENT(cond)  do{}while(0)
#endif

void HL_AssertFailed(const char *file, HER_UInt32Def line);

#endif /**__KERNAL_ASSENT_H__**/

