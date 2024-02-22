#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

/**********************************************************************
 *                          COMMENT                                   *
 **********************************************************************/

int main(void) {
    int* nums[] = {2,3,1,1,4};
    jump(&nums, SIZE);
	

	return 0;
}

int jump(int* nums, int numsSize) {
    int tmp = 0, cover = 0;
    int count = 0;

    for (int i = 0;i <= cover;) {
        tmp = i + nums[i];
        cover = (cover > tmp ? cover : tmp);  
        if (cover >= numsSize - 1) return count;
        count++;
        i += nums[i];
    }
    return count;
}