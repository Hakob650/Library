#include <stdio.h>
void print_arrays_reverse(int arr1[],int arr2[],int size) {
    for(int i=0;i<size;++i){
        printf("%d %d\n",arr1[size-1-i],arr2[size-1-i]);
    }
}
