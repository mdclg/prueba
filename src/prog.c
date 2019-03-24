#include <stdio.h>

int resta(int a, int b){
	if(a >= b){
		return a - b;
	}
	else{
		printf("error, a no puede ser menor que b");
		printf("otro error");
		return -1;
	}
}

int suma(int a, int b){
	return a + b;
}

int main(){

	printf("Haciendo pruebas con git\n");
	int total = suma(5,3);
	printf("total %d", total);


} 
