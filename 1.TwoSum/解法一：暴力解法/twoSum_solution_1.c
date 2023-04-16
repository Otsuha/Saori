//
// Created by 河瀬雫 on 2023/4/2.
//

#include "twoSum_solution_1.h"

#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

int* twoSum_solution_1(const int* nums, int numsSize, int target, int* returnSize) {
    if (numsSize <= 1) {
        returnSize = NULL;
        return NULL;
    }
    int first = -1;
    int second = -1;
    bool find = false;
    int* result = malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; ++i) {
        if (find) {
            break;
        }
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                first = i;
                result[0] = first;
                second = j;
                result[1] = second;
                find = true;
                break;
            }
        }
    }
    if (find) {
        *returnSize = 2;
        return result;
    } else {
        returnSize = NULL;
        return NULL;
    }
}