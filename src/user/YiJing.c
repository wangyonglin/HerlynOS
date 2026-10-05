/*
 * @file    YiJing.c
 * @brief   易经六十四卦文王序常量数据
 * @author  Herlyn
 * @date    2026-10-05
 * @note    HerlynOS Project
 *
 * Copyright (C) 2026 Herlyn. All rights reserved.
 */

#include "user/YiJing.h"

const HER_YiJingDef g_YiJingData[64] =
{
    {.hex.raw = HER_HEX_PACK(0x7,0x7), .name = "乾"},    // 0 乾为天
    {.hex.raw = HER_HEX_PACK(0x0,0x0), .name = "坤"},    // 1 坤为地
    {.hex.raw = HER_HEX_PACK(0x4,0x0), .name = "屯"},    // 2 水雷屯
    {.hex.raw = HER_HEX_PACK(0x0,0x2), .name = "蒙"},    // 3 山水蒙
    {.hex.raw = HER_HEX_PACK(0x5,0x4), .name = "需"},    // 4 水天需
    {.hex.raw = HER_HEX_PACK(0x4,0x1), .name = "讼"},    // 5 天水讼
    {.hex.raw = HER_HEX_PACK(0x0,0x4), .name = "师"},    // 6 地水师
    {.hex.raw = HER_HEX_PACK(0x4,0x0), .name = "比"},    // 7 水地比
    {.hex.raw = HER_HEX_PACK(0x7,0x3), .name = "小畜"},  // 8 风天小畜
    {.hex.raw = HER_HEX_PACK(0x3,0x7), .name = "履"},    // 9 天泽履
    {.hex.raw = HER_HEX_PACK(0x7,0x0), .name = "泰"},    //10 地天泰
    {.hex.raw = HER_HEX_PACK(0x0,0x7), .name = "否"},    //11 天地否
    {.hex.raw = HER_HEX_PACK(0x3,0x6), .name = "同人"},  //12 天火同人
    {.hex.raw = HER_HEX_PACK(0x6,0x7), .name = "大有"},  //13 火天大有
    {.hex.raw = HER_HEX_PACK(0x0,0x5), .name = "谦"},    //14 地山谦
    {.hex.raw = HER_HEX_PACK(0x5,0x0), .name = "豫"},    //15 雷地豫
    {.hex.raw = HER_HEX_PACK(0x2,0x4), .name = "随"},    //16 泽雷随
    {.hex.raw = HER_HEX_PACK(0x4,0x2), .name = "蛊"},    //17 山风蛊
    {.hex.raw = HER_HEX_PACK(0x0,0x3), .name = "临"},    //18 地泽临
    {.hex.raw = HER_HEX_PACK(0x3,0x0), .name = "观"},    //19 风地观
    {.hex.raw = HER_HEX_PACK(0x6,0x2), .name = "噬嗑"},  //20 火雷噬嗑
    {.hex.raw = HER_HEX_PACK(0x2,0x6), .name = "贲"},    //21 山火贲
    {.hex.raw = HER_HEX_PACK(0x0,0x2), .name = "剥"},    //22 山地剥
    {.hex.raw = HER_HEX_PACK(0x2,0x0), .name = "复"},    //23 地雷复
    {.hex.raw = HER_HEX_PACK(0x7,0x2), .name = "无妄"},  //24 天雷无妄
    {.hex.raw = HER_HEX_PACK(0x2,0x7), .name = "大畜"},  //25 山天大畜
    {.hex.raw = HER_HEX_PACK(0x2,0x1), .name = "颐"},    //26 山雷颐
    {.hex.raw = HER_HEX_PACK(0x1,0x2), .name = "大过"},  //27 泽风大过
    {.hex.raw = HER_HEX_PACK(0x4,0x4), .name = "坎"},    //28 坎为水
    {.hex.raw = HER_HEX_PACK(0x5,0x5), .name = "离"},    //29 离为火
    {.hex.raw = HER_HEX_PACK(0x1,0x5), .name = "咸"},    //30 泽山咸
    {.hex.raw = HER_HEX_PACK(0x5,0x1), .name = "恒"},    //31 雷风恒
    {.hex.raw = HER_HEX_PACK(0x7,0x2), .name = "遁"},    //32 天山遁
    {.hex.raw = HER_HEX_PACK(0x2,0x7), .name = "大壮"},  //33 雷天大壮
    {.hex.raw = HER_HEX_PACK(0x6,0x0), .name = "晋"},    //34 火地晋
    {.hex.raw = HER_HEX_PACK(0x0,0x6), .name = "明夷"},  //35 地火明夷
    {.hex.raw = HER_HEX_PACK(0x6,0x3), .name = "家人"},  //36 风火家人
    {.hex.raw = HER_HEX_PACK(0x3,0x6), .name = "睽"},    //37 火泽睽
    {.hex.raw = HER_HEX_PACK(0x4,0x2), .name = "蹇"},    //38 水山蹇
    {.hex.raw = HER_HEX_PACK(0x2,0x4), .name = "解"},    //39 雷水解
    {.hex.raw = HER_HEX_PACK(0x1,0x0), .name = "损"},    //40 山泽损
    {.hex.raw = HER_HEX_PACK(0x0,0x1), .name = "益"},    //41 风雷益
    {.hex.raw = HER_HEX_PACK(0x1,0x6), .name = "夬"},    //42 泽天夬
    {.hex.raw = HER_HEX_PACK(0x7,0x1), .name = "姤"},    //43 天风姤
    {.hex.raw = HER_HEX_PACK(0x1,0x0), .name = "萃"},    //44 泽地萃
    {.hex.raw = HER_HEX_PACK(0x0,0x1), .name = "升"},    //45 地风升
    {.hex.raw = HER_HEX_PACK(0x4,0x1), .name = "困"},    //46 泽水困
    {.hex.raw = HER_HEX_PACK(0x1,0x4), .name = "井"},    //47 水风井
    {.hex.raw = HER_HEX_PACK(0x6,0x1), .name = "革"},    //48 泽火革
    {.hex.raw = HER_HEX_PACK(0x1,0x6), .name = "鼎"},    //49 火风鼎
    {.hex.raw = HER_HEX_PACK(0x5,0x2), .name = "震"},    //50 震为雷
    {.hex.raw = HER_HEX_PACK(0x2,0x5), .name = "艮"},    //51 艮为山
    {.hex.raw = HER_HEX_PACK(0x3,0x4), .name = "渐"},    //52 风山渐
    {.hex.raw = HER_HEX_PACK(0x4,0x3), .name = "归妹"},  //53 雷泽归妹
    {.hex.raw = HER_HEX_PACK(0x6,0x5), .name = "丰"},    //54 雷火丰
    {.hex.raw = HER_HEX_PACK(0x5,0x6), .name = "旅"},    //55 火山旅
    {.hex.raw = HER_HEX_PACK(0x3,0x1), .name = "巽"},    //56 巽为风
    {.hex.raw = HER_HEX_PACK(0x1,0x3), .name = "兑"},    //57 兑为泽
    {.hex.raw = HER_HEX_PACK(0x3,0x4), .name = "涣"},    //58 风水涣
    {.hex.raw = HER_HEX_PACK(0x4,0x3), .name = "节"},    //59 水泽节
    {.hex.raw = HER_HEX_PACK(0x3,0x1), .name = "中孚"},  //60 风泽中孚
    {.hex.raw = HER_HEX_PACK(0x1,0x3), .name = "小过"},  //61 雷山小过
    {.hex.raw = HER_HEX_PACK(0x6,0x4), .name = "既济"},  //62 水火既济
    {.hex.raw = HER_HEX_PACK(0x4,0x6), .name = "未济"},  //63 火水未济
};


