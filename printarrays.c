#include <stdio.h>
void print_arrays_side_by_side(int arr1[],int arr2[],int size){
    for (int i=0;i<size;++i){
        printf("%d %d\n",arr1[i],arr2[i]);
    }
}

