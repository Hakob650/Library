#include <stdio.h>
int calculate_average(int arr[],int size){
    int sum = 0;
    for (int i=0;i<size;++i){
        sum+=arr[i];
    }
    int res=sum/size;
    return res;
}



