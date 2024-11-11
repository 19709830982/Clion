//
// Created by 29291 on 2024/11/11.
//给定 n 个数，请找出其中相差（差的绝对值）最小的两个数，输出它们的差值的绝对值。
//输入格式
// 输入第一行包含一个整数 n。
// 第二行包含 n 个正整数，相邻整数之间使用一个空格分隔。
//输出格式
//输出一个整数，表示最小差值
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int compare(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int main() {
    // 声明变量 n 用于存储数组中的元素个数
    int n;
    // 从控制台读取数组的元素个数
    scanf("%d", &n);

    // 动态分配内存以根据输入的元素个数创建数组
    int *arr = (int *) malloc(sizeof(int) * n);

    // 读取每个元素的值并存入数组
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // 使用 qsort 函数对数组进行排序
    qsort(arr, n, sizeof(int), compare);

    // 初始化变量 min_diff 用于存储最小差值，初始值设为最大整数值
    int min_diff = INT_MAX;

    // 遍历排序后的数组，寻找相邻元素之间的最小差值
    for (int i = 1; i < n; ++i) {
        int diff = arr[i] - arr[i - 1];
        // 如果当前差值小于 min_diff，则更新 min_diff
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    // 输出最小差值
    printf("%d", min_diff);

    // 释放为数组分配的内存
    free(arr);

    // 返回 0 表示程序成功结束
    return 0;
}

