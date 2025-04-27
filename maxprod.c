int maximumProduct(int *nums,int numsSize){
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    int min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<numsSize;++i){
        int n=nums[i];
        if(n>max1){
            max3=max2;
            max2=max1;
            max1=n;
        }else if(n>max2){
            max3=max2;
            max2=n;
        }else if(n>max3){
            max3=n;
        }
        if(n<min1){
            min2=min1;
            min1=n;
        }else if(n<min2){
            min2=n;
        }
    }
        int p1=max1*max2*max3;
        int p2=min1*min2*max1;

        return (p1>p2) ? p1:p2;
    }
