#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int maxProfit(int* prices, int pricesSize);

/**********************************************************************
                        
 **********************************************************************/

int main(void) {
    int *stock[] = {6,1,3,2,4,7};
    int i=maxProfit(&stock, 6);
    printf("%d", i);
	return 0;
}

int maxProfit(int* prices, int pricesSize) {

    int stock = 0, sum = 0; // stock_num,earn
    int prediff = 0;

    for (int i = 0; i < pricesSize - 1; i++) {
        int curdiff = prices[i + 1] - prices[i]; // tom-today
        if (stock == 0) {
            if (curdiff >= 0) { // buy when today is cheaper
                stock = prices[i];


            }
        }
        else {
            if (curdiff < 0 && (prices[i + 2] - prices[i + 1]) < 0) { // sale when today is expensive
                sum += prices[i] - stock;
                stock = 0;
            }
            else if ((prices[i + 2] - prices[i + 1]) > 0)
                return prices[pricesSize - 1] - stock;
        }
        prediff = curdiff;
    }

    return sum;
}