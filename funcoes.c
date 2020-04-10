#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool calcularNumeroPrimo(int);
bool calcularNumeroPerfeito(int);

void numeroPrimo();
void numeroPerfeito();
int main(){
	//numeroPrimo();
	numeroPerfeito();
}
void numeroPerfeito(){
	int i;
	
	for(i = 0; i<=100; i++){
		if(calcularNumeroPerfeito(i)){
			printf("%d, ", i);
		}	
	}
}
void numeroPrimo(){
	int i;
	for(i = 0; i<=100; i++){
		if(calcularNumeroPrimo(i)){
			printf("%d, ", i);			
		}
	}
	
}
bool calcularNumeroPerfeito(int n){
	int i, sum;
	if(n < 0){
		return false;
	}
	sum = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			sum = sum + i;  
		}
	}
	if( sum == n ){
		return true;
	}else{
		return false;
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
