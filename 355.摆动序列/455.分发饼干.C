#include <stdlib.h>
#include "main.h"

int cmp(void const* a, void const* b) {
    return *(int*)a - *(int*)b;
}
//指针变量指向的是地址，所以这里是右值，所以是地址对应变量的值进行相减
//qsort对比较大小的函数进行了约束，此处的返回值和形参都不能再改变


int findContentChildren(int* a, int aSize, int* s, int sSize) {
    //sort(a.begin(), a.end());
    //sort(s.begin(), s.end());
    //c++中的排序手法

    qsort(a, aSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);

    int  num = 0, j = 0;

    for (int i = 0;i < aSize;i++) {
        for (j;j < sSize;j++) {
            if (a[i] < a[j]) {
                num++;
            }
        }
    }

    return num;


}