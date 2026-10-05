#ifndef __KERNEL_DEFS_H__
#define __KERNEL_DEFS_H__

/**
 * @brief 平台掩码定义
 */
#ifndef HEY_PLATFORM_NONE
#define HEY_PLATFORM_NONE         (0U)
#endif
#ifndef HEY_PLATFORM_LINUX
#define HEY_PLATFORM_LINUX        (1U << 0)
#endif
#ifndef HEY_PLATFORM_WIN32
#define HEY_PLATFORM_WIN32        (1U << 1)
#endif

#ifndef HEY_PLATFORM_STM32U5XX
#define HEY_PLATFORM_STM32U5XX    (1U << 2)
#endif
/* 无符号固定宽度类型 */
typedef unsigned char      HEY_UInt8Def;
typedef unsigned short     HEY_UInt16Def;
typedef unsigned int       HEY_UInt32Def;
typedef unsigned long long HEY_UInt64Def;

/* 有符号固定宽度类型 */
typedef signed char        HEY_Int8Def;
typedef signed short       HEY_Int16Def;
typedef signed int         HEY_Int32Def;
typedef signed long long   HEY_Int64Def;

/* volatile 寄存器访问类型 */
typedef volatile unsigned char      HEY_VUInt8Def;
typedef volatile unsigned short     HEY_VUInt16Def;
typedef volatile unsigned int       HEY_VUInt32Def;

/* 浮点类型 */
typedef float              HEY_Float32Def;
typedef double             HEY_Float64Def;

/* 字符串 (和标准库兼容) */
typedef char        HEY_CharDef;
typedef char*       HEY_StringDef;


/* 布尔类型，统一风格：unsigned char */
typedef unsigned char      HEY_BoolDef;

/* 函数返回状态码类型 */
typedef signed char        HEY_StatusDef;

/* 预处理开关常量，仅用于 #if 条件编译 */
#define HEY_TRUE     			1
#define HEY_FALSE    			0

/* 运行时布尔常量，带类型转换，用于代码内赋值判断 */
#define Enabled          	    HEY_TRUE
#define Disabled                HEY_FALSE

#endif /* __KERNEL_DEFS_H__ */
