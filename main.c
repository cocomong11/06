#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	int i, multi=1;
	for(i=1;i<=n;i++){
		multi=multi*i;		
	}
	return multi;
} 

int combination(int n,int r){
	
return	factorial(n)/(factorial(n-r)*factorial(r));
	
}
int main(void){
	printf("result is %d",combination(5,4));
}

