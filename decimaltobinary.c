#include <stdio.h>
void printBinary(int num){
	printf("num in binary");
	for(int i=31;i>=0;i--){
		int bit=(num>>i)&1;
		printf("%d",bit);
	}printf("\n");
}
