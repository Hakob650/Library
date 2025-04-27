#include <stdio.h>
int power(int num,int exp){
	int result=1;
	for(int i=0;i<exp;++i){
		result=result*num;
	}return result;
}
