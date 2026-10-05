#ifndef __KERNEL_DEFS_H__
#define __KERNEL_DEFS_H__

/**
 * @brief 平台掩码定义
 */
#ifndef HER_PLATFORM_NONE
#define HER_PLATFORM_NONE         (0U)
#endif
#ifndef HER_PLATFORM_LINUX
#define HER_PLATFORM_LINUX        (1U << 0)
#endif
#ifndef HER_PLATFORM_WIN32
#define HER_PLATFORM_WIN32        (1U << 1)
#endif

#ifndef HER_PLATFORM_STM32U5XX
#define HER_PLATFORM_STM32U5XX    (1U << 2)
#endif
/* 无符号固定宽度类型 */
typedef unsigned char      HER_UInt8Def;
typedef unsigned short     HER_UInt16Def;
typedef unsigned int       HER_UInt32Def;
typedef unsigned long long HER_UInt64Def;

/* 有符号固定宽度类型 */
typedef signed char        HER_Int8Def;
typedef signed short       HER_Int16Def;
typedef signed int         HER_Int32Def;
typedef signed long long   HER_Int64Def;

/* volatile 寄存器访问类型 */
typedef volatile unsigned char      HER_VUInt8Def;
typedef volatile unsigned short     HER_VUInt16Def;
typedef volatile unsigned int       HER_VUInt32Def;

/* 浮点类型 */
typedef float              HER_Float32Def;
typedef double             HER_Float64Def;

/* 字符串 (和标准库兼容) */
typedef char        HER_CharDef;
typedef char*       HER_StringDef;


/* 布尔类型，统一风格：unsigned char */
typedef unsigned char      HER_BoolDef;

/* 函数返回状态码类型 */
typedef signed char        HER_StatusDef;

/* 预处理开关常量，仅用于 #if 条件编译 */
#define HER_TRUE     			1
#define HER_FALSE    			0

/* 运行时布尔常量，带类型转换，用于代码内赋值判断 */
#define Enabled          	    HER_TRUE
#define Disabled                HER_FALSE

#endif /* __KERNEL_DEFS_H__ */
