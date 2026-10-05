/*
 * @file    YiJing.h
 * @brief   易经六十四卦数据类型与工具宏定义
 * @author  Herlyn
 * @date    2026-10-04
 * @note    HerlynOS Project
 *
 * Copyright (C) 2026 Herlyn. All rights reserved.
 */
#ifndef YIJING_H
#define YIJING_H

#include "herlyn/herlyn.h"

/**
 * @brief 拼装：上卦(0~7) + 下卦(0~7) → 卦raw值
 * @param upper  上卦(外卦) 0~7
 * @param lower  下卦(内卦) 0~7
 */
#define HER_HEX_PACK(upper, lower)  ((((HER_UInt8Def)(upper) & 0x07U) << 3) | ((lower) & 0x07U))
#define HER_HEX_GET_UPPER(raw)      (((raw) >> 3) & 0x07U)
#define HER_HEX_GET_LOWER(raw)      ((raw) & 0x07U)

/**
 * @brief 六十四卦联合体
 * raw低6bit：bit0~bit2=下卦，bit3~bit5=上卦
 */
typedef union
{
    HER_UInt8Def raw;
    struct
    {
        HER_UInt8Def lower :3; // 下卦（内卦，初、二、三爻）
        HER_UInt8Def upper :3; // 上卦（外卦，四、五、上爻）
        HER_UInt8Def rsv   :2; // 保留位，填充对齐至8bit
    } bits;
} HER_HexagramDef;

/**
 * @brief 易经卦信息结构体
 */
typedef struct HER_YiJingDef
{
    HER_HexagramDef hex;                // 卦象编码
    const HER_CharDef * name;           // 卦名称，const防止字符串被意外修改
} HER_YiJingDef;

// 六十四卦常量表（文王序）
extern const HER_YiJingDef g_YiJingData[64];

#endif /* YIJING_H */
