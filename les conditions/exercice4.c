#include <stdio.h>
#include <stdlib.h>


int main() {
	int A,B;
	printf("donner la valeur de A : ");
	scanf("%d",&A);
		printf("donner la valeur de B : ");
		scanf("%d",&B);
		if (A == B)
		printf("la somme triple est : %d ", (A+B)*3);
		else
		printf("la somme  = %d ",A+B);
	
	
	return 0;
}
