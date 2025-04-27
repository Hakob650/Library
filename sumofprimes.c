#include <stdio.h>
int sumofPrimes(int num){
	for(int i=2;i<=num/2;++i){
		if(isPrime(i)&&isPrime(num-i)){
			return 1;
		}
	}return 0;
}
