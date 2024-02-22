int maxSubArray(int* nums, int numsSize) {
     int temp=0,res=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]+nums[i+1]<0){
            i++;
        }
        else{
            temp+=nums[i];
        }

        res=(temp>res?temp:res);
        
    }

    return res;
    
}