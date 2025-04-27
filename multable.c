#include <stdio.h>
int mulTable(int num){
	printf("enter num");
	scanf("%d",&num);
	for(int i=1;i<=10;++i){
		printf("%d * %d=%d\n",i,num.num*i);
	}return 0;
}
