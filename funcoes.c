#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool calcularNumeroPrimo(int);
void numeroPrimo();

int main(){
	numeroPrimo();
}

void numeroPrimo(){
	int i;
	for(i = 0; i<=100; i++){
		if(calcularNumeroPrimo(i)){
			printf("%d, ", i);			
		}
	}
	
}

bool calcularNumeroPrimo(int n){
	int i,sum;
	if(n < 0 ){
		return false;
	}
	sum = 0;
	for(i = 1; i<=n; i++){
		if(n%i == 0){
			sum++;
		}
	}
	if(sum == 2 ){
		return true;
	}else{
		return false;
	}
	
}
