#ifndef __KERNAL_ASSENT_H__
#define __KERNAL_ASSENT_H__

#include "heylin/kernel/string.h"

#ifdef HEY_USE_DEBUG
#define ASSENT(cond)  do{ if(!(cond)){ HEY_AssertFailed(__FILE__, __LINE__); } }while(0)
#else
#define ASSENT(cond)  do{}while(0)
#endif

void HEY_AssertFailed(const char *file, HER_UInt32Def line);

#endif /**__KERNAL_ASSENT_H__**/

