#include <stdio.h>
void find_number(int arr[],int size,int num){
    for (int i=0;i<size;++i) {
        if (arr[i]==num) {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}
