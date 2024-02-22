int wiggleMaxLength(int* nums, int numsSize) {
    //将整体的趋势看为山峰山谷
    int preDiff = 0;
    int curDiff = 0;
    int res = 1; //默认最右存在一个峰值（或者理解为只有一个数时，也看作摆动数列）

    if (numsSize == 1)
        return res;

    for (int i = 0; i < numsSize - 1; i++) {
        //这里边界为什么可以取到
        //下标的最大值为numSize-1，当-2++，下一次返回判断不通过

        curDiff = nums[i + 1] - nums[i];

        if (curDiff > 0 && preDiff <= 0 || curDiff < 0 && preDiff >= 0) {//变量变化趋势不一致时才记为子序列
            res++;
            preDiff = curDiff;
        }
    }
    return res;
}

#if 0


int judgeOpposite(int a, int b) {
    int high = 0x1000 & (a ^ b);
    while (high > 0 && high) {
        high >>= 1;
    }
    return high;
}

int wiggleMaxLength(int* nums, int numsSize) { //存在问题的原因是，题目中的意思是存在这样的子列，不一定是遇上不合适的输出
    //可以求差之后求符号是否相反，并且暂存当前对应元素用于下一次比较
    int count = 0, maxLen = 0;//记录当前子序列成功个数，以及满足条件的最长子列
    for (int i = 0; i < numsSize - 2; i++) {
        nums[i] = nums[i + 1] - nums[i]; //将当前数组改为差值
    }

    for (int j = 0; j < numsSize - 3; j++) {

        if (judgeOpposite(nums[j + 1], nums[j])) {
            count++;
            maxLen++;
        }
        else {
            maxLen = (count > maxLen ? count : maxLen);//错误原因：按照这个逻辑只要有不同就退出
            //不是求子序列的方法
            count = 0;
        }
    }

    return count;
};
#endif 

