/*
 * @file    main.c
 * @brief   HerlynOS 入口
 * @author  Herlyn
 * @date    2026-10-03
 * @note    HerlynOS Project
 *
 * Copyright (C) 2026 Herlyn. All rights reserved.
 */
#include "herlyn/core.h"
#include <stdio.h>

int main(void)
{
    // 裸机 Cortex-M 程序：main 一般永不返回
    HER_StatusDef ret;
    printf("hy  HerlynOS\r\n");
    // 在这里放系统初始化


    // 主循环
    // while(1)
    // {
    //     HerlynOS_Run();
    // }

    // 理论不会执行到这里
    return 0;
}
