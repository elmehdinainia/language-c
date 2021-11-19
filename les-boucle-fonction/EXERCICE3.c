#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,Z;
	
	printf("donner un valeur : ");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
		Z=n%i;
		if (Z==0)
		printf("nombre pas premier");
		else
			printf("nombre est premier");	
		
	return 0;
}
