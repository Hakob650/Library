#include <stdio.h>
int f(int arr1[],int arr2[],int size){
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            if(arr1[i]==arr2[j]){
                return 0;
            }else{
                return -1;
            }
        }
    }return 0;
}

