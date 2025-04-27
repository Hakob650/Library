#include <stdio.h>
void toggle_case(char arr[],int size) {
    for (int i=0;i<size;++i) {
        arr[i]=arr[i]^32;
        printf("%c",arr[i]);
    }
}
