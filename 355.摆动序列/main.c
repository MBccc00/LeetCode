#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"
/**********************************************************************
 *                          COMMENT                                   *
 **********************************************************************/

int main(void) {
    int* nums[] = { 1, 7, 4, -9, -2, 5 };
    int i = wiggleMaxLength(nums, 6);
   // printf("%d", i);

    int* child[] = { 1,2,3 };
    int* cookie[] = { 1,1 };
   // int j = findContentChildren(child, 3, cookie, 2);
   // printf("%d", j);

    int k = maxSubArray( nums, 6);
    printf("%d", k);

    getchar();

	return 0;
}



