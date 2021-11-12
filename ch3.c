#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float mile,metre,km;
	printf("entrer la valeur de metre :");
	scanf("%f",&metre);
	km=metre*1000;
	mile=km*1.609;
	printf("mile=%f",mile);
	
	
	return 0;
}
