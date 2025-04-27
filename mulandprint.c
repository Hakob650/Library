#include <stdio.h>
void multiply_and_print(int arr1[],int arr2[],int size){
    int p=1;
    for (int i=0;i<size;++i){
        for (int j=0;j<=i;++j){
            if (i==j){
                p=arr1[i]*arr2[j];
            }
        }
        printf("%d ",p);
    }
}

