#include <stdio.h>

int factorial(long int n) {

	if (n == 0)
		return 1;
	
	return factorial(n - 1) * n;

}


int main() {

	long int n;
	printf("Enter number: ");
	scanf("%d", &n);

	printf("factorial = %d", factorial(n));

	return 0;
}