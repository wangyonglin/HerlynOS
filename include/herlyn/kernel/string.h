#ifndef __KERNEL_STRING_H__
#define __KERNEL_STRING_H__

#include "herlyn/kernel/lib.h"
#include <stdint.h>
#include <stdbool.h>



/* 状态返回值 */
#define HER_OK         ((HER_StatusDef)0)
#define HER_ERR        ((HER_StatusDef)-1)



/* 空指针 */
#ifndef HER_NULL
#define HER_NULL       ((void *)0)
#endif

/* 内联 */
#ifndef HER_INLINE
#define HER_INLINE     static inline
#endif

/* 数组元素个数 */
#define HER_ARRAY_SIZE(a)   (sizeof(a) / sizeof((a)[0]))

/* 空参数 */
#define HER_UNUSED(x)   ((void)(x))


typedef uint16_t HER_ColorDef;

/* RGB565 颜色表 */
#define HER_COLOR_WHITE           ((HER_ColorDef)0xFFFF)
#define HER_COLOR_BLACK           ((HER_ColorDef)0x0000)
#define HER_COLOR_BLUE            ((HER_ColorDef)0x001F)
#define HER_COLOR_BRED            ((HER_ColorDef)0xF81F)
#define HER_COLOR_GRED            ((HER_ColorDef)0xFFE0)
#define HER_COLOR_GBLUE           ((HER_ColorDef)0x07FF)
#define HER_COLOR_RED             ((HER_ColorDef)0xF800)
#define HER_COLOR_MAGENTA         ((HER_ColorDef)0xF81F)
#define HER_COLOR_GREEN           ((HER_ColorDef)0x07E0)
#define HER_COLOR_CYAN            ((HER_ColorDef)0x7FFF)
#define HER_COLOR_YELLOW          ((HER_ColorDef)0xFFE0)
#define HER_COLOR_BROWN           ((HER_ColorDef)0xBC40)
#define HER_COLOR_BRRED           ((HER_ColorDef)0xFC07)
#define HER_COLOR_GRAY            ((HER_ColorDef)0x8430)
#define HER_COLOR_DARKBLUE        ((HER_ColorDef)0x01CF)
#define HER_COLOR_LIGHTBLUE       ((HER_ColorDef)0x7D7C)
#define HER_COLOR_GRAYBLUE        ((HER_ColorDef)0x5458)
#define HER_COLOR_LIGHTGREEN      ((HER_ColorDef)0x841F)
#define HER_COLOR_LGRAY           ((HER_ColorDef)0xC618)
#define HER_COLOR_LGRAYBLUE       ((HER_ColorDef)0xA651)
#define HER_COLOR_LBBLUE          ((HER_ColorDef)0x2B12)





#endif /* __HERLYN_STRING_H__ */
