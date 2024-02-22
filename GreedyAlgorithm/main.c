#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int candy(int* ratings, int ratingsSize);


/**********************************************************************
 *                          COMMENT                                   *
 **********************************************************************/

int main(void) {
	int num[3] = { 1,0,2 };
	
	int sum = candy(num, 3);
	printf("%d", sum);

	system("pause");
}

int candy(int* ratings, int ratingsSize) {
	int count = ratingsSize;
	int* num = (int*)malloc(ratingsSize * sizeof(int));
	memset(num, 1, ratingsSize * sizeof(int));


	for (int left = 0; left < ratingsSize - 1; left++) {
		if (ratings[left + 1] > ratings[left]) {
			num[left + 1]++;
			count++;
		}
	}

	for (int right = ratingsSize - 1; right > 0; right--) {

		if (ratings[right - 1] > ratings[right]&&num[right-1]<num[right]) {
			num[right - 1]++;
			count++;
		}
	}


	return count;

}