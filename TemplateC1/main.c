#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findMiddleIndex(int* nums, int numsSize);
#define SIZE  5

/**********************************************************************
 *                          COMMENT                                   *
 **********************************************************************/

int main(void) {
	
    int* nums[] = { 2,3,1,1,4 };
    findMiddleIndex(&nums, SIZE);

	return 0;
}

int findMiddleIndex(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0;i < numsSize;i++)
        sum += nums[i];

    for (int i = 0;i < numsSize - 1;i++) {
        int leftSum = 0;
        leftSum += nums[i];
        if (leftSum * 2 + nums[i + 1] == sum)
            return i + 1;
    }

    return -1;


}