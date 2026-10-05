#ifndef __KERNEL_STRING_H__
#define __KERNEL_STRING_H__

#include "heylin/kernel/lib.h"
#include <stdint.h>




/* 状态返回值 */
#define HEY_OK         ((HEY_StatusDef)0)
#define HEY_ERR        ((HEY_StatusDef)-1)



/* 空指针 */
#ifndef HEY_NULL
#define HEY_NULL       ((void *)0)
#endif

/* 内联 */
#ifndef HEY_INLINE
#define HEY_INLINE     static inline
#endif

/* 数组元素个数 */
#define HEY_ARRAY_SIZE(a)   (sizeof(a) / sizeof((a)[0]))

/* 空参数 */
#define HEY_UNUSED(x)   ((void)(x))


typedef uint16_t HEY_ColorDef;

/* RGB565 颜色表 */
#define HEY_COLOR_WHITE           ((HEY_ColorDef)0xFFFF)
#define HEY_COLOR_BLACK           ((HEY_ColorDef)0x0000)
#define HEY_COLOR_BLUE            ((HEY_ColorDef)0x001F)
#define HEY_COLOR_BRED            ((HEY_ColorDef)0xF81F)
#define HEY_COLOR_GRED            ((HEY_ColorDef)0xFFE0)
#define HEY_COLOR_GBLUE           ((HEY_ColorDef)0x07FF)
#define HEY_COLOR_RED             ((HEY_ColorDef)0xF800)
#define HEY_COLOR_MAGENTA         ((HEY_ColorDef)0xF81F)
#define HEY_COLOR_GREEN           ((HEY_ColorDef)0x07E0)
#define HEY_COLOR_CYAN            ((HEY_ColorDef)0x7FFF)
#define HEY_COLOR_YELLOW          ((HEY_ColorDef)0xFFE0)
#define HEY_COLOR_BROWN           ((HEY_ColorDef)0xBC40)
#define HEY_COLOR_BRRED           ((HEY_ColorDef)0xFC07)
#define HEY_COLOR_GRAY            ((HEY_ColorDef)0x8430)
#define HEY_COLOR_DARKBLUE        ((HEY_ColorDef)0x01CF)
#define HEY_COLOR_LIGHTBLUE       ((HEY_ColorDef)0x7D7C)
#define HEY_COLOR_GRAYBLUE        ((HEY_ColorDef)0x5458)
#define HEY_COLOR_LIGHTGREEN      ((HEY_ColorDef)0x841F)
#define HEY_COLOR_LGRAY           ((HEY_ColorDef)0xC618)
#define HEY_COLOR_LGRAYBLUE       ((HEY_ColorDef)0xA651)
#define HEY_COLOR_LBBLUE          ((HEY_ColorDef)0x2B12)





#endif /* __HERLYN_STRING_H__ */
