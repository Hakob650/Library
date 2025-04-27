#include <stdio.h>
int fibbonaci(int num){
	if(num==0){
		return 0;
	}else if(num==1){
		return 1;
	}int a=0,b=1,c;
	for(int i=2;i<=num;++i){
		c=a+b;
		a=b;
		b=c;
	}return b;
}
