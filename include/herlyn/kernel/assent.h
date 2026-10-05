#ifndef __KERNAL_ASSENT_H__
#define __KERNAL_ASSENT_H__

#include "herlyn/kernel/string.h"

#ifdef HER_USE_DEBUG
#define ASSENT(cond)  do{ if(!(cond)){ HER_AssertFailed(__FILE__, __LINE__); } }while(0)
#else
#define ASSENT(cond)  do{}while(0)
#endif

void HER_AssertFailed(const char *file, HER_UInt32Def line);

#endif /**__KERNAL_ASSENT_H__**/

