#include <stdio.h>
void print_digits(char arr[],int size) {
    for (int i=0;i<size;++i){
        if (arr[i]>='0' && arr[i]<='9') {
            printf("%c",arr[i]);
        }
    }
}

