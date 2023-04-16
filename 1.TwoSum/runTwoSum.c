//
// Created by 河瀬雫 on 2023/4/2.
//

#include "runTwoSum.h"
#include "stdio.h"
#include "解法一：暴力解法/twoSum_solution_1.h"

void runTwoSum() {
    int nums[] = {2, 7, 11, 15};
    int returnSize = 0;
    twoSum_solution_1(nums, 4, 9, &returnSize);

    for (int i = 0; i < returnSize; ++i) {
        printf("%d", i);
    }
}