#include <stdio.h>

int resta(int a, int b){
	if(a > b){
		return a - b;
	}
	else{
		printf("a debe ser mayor que b");
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
