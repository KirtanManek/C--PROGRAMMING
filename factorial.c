#include<stdio.h>

void main(){
	float n, fact = 1.0;
	int i;
	printf("Enter number : ");
	scanf("%f",&n);
	for(i = 1; i <= n; i++){
		fact = fact * i;
	}
	printf("Factorial of %.1f is %.1f",n,fact);
}
