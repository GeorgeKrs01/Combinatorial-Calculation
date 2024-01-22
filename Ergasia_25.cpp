#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int fact_n;
int fact_k;
int type;
int i;
int type_2;
int type_3;
int number;
int number_2;
int number_3;

int main(void){
	
	
	printf("If you want 5man team put (5): \n");
	scanf("%d", &fact_k);
	printf("If you want 10 in total gimme (10): \n");
	scanf("%d", &fact_n);
	
	type = fact_n - fact_k;
	printf("type: %d \n", type);
	
	
	//factorial n 
	number = fact_n - 1;
	for(i = 1; i <= number; i++){
		fact_n *= i;
	}
	
	//factorial k
	number_2 = fact_k - 1;
	for(i = 1; i <= number_2; i++){
		fact_k *= i;
	}
	
	//factorial of (n - k)!
	number_3 = type -1;
	for(i = 1; i <= number_3; i++){
		type *= i;
	}
	
	// formula = n! / k! * ( n - k )!
	type_2 = (fact_n) / (fact_k * type);
	
	
	printf("fact n: %d \n", fact_n);
	printf("fact k: %d \n", fact_k);
	printf("type: %d \n", type);
	printf("type_2: %d \n", type_2);
	
	
	return 0;
	system("PAUSE");
}
