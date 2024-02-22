int wiggleMaxLength(int* nums, int numsSize) {
    //����������ƿ�Ϊɽ��ɽ��
    int preDiff = 0;
    int curDiff = 0;
    int res = 1; //Ĭ�����Ҵ���һ����ֵ���������Ϊֻ��һ����ʱ��Ҳ�����ڶ����У�

    if (numsSize == 1)
        return res;

    for (int i = 0; i < numsSize - 1; i++) {
        //����߽�Ϊʲô����ȡ��
        //�±�����ֵΪnumSize-1����-2++����һ�η����жϲ�ͨ��

        curDiff = nums[i + 1] - nums[i];

        if (curDiff > 0 && preDiff <= 0 || curDiff < 0 && preDiff >= 0) {//�����仯���Ʋ�һ��ʱ�ż�Ϊ������
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

int wiggleMaxLength(int* nums, int numsSize) { //���������ԭ���ǣ���Ŀ�е���˼�Ǵ������������У���һ�������ϲ����ʵ����
    //�������֮��������Ƿ��෴�������ݴ浱ǰ��ӦԪ��������һ�αȽ�
    int count = 0, maxLen = 0;//��¼��ǰ�����гɹ��������Լ����������������
    for (int i = 0; i < numsSize - 2; i++) {
        nums[i] = nums[i + 1] - nums[i]; //����ǰ�����Ϊ��ֵ
    }

    for (int j = 0; j < numsSize - 3; j++) {

        if (judgeOpposite(nums[j + 1], nums[j])) {
            count++;
            maxLen++;
        }
        else {
            maxLen = (count > maxLen ? count : maxLen);//����ԭ�򣺰�������߼�ֻҪ�в�ͬ���˳�
            //�����������еķ���
            count = 0;
        }
    }

    return count;
};
#endif 

