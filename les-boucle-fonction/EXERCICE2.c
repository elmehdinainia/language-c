#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,j,k;
	printf("entrer un nombre : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=(2*i)-1;k++){
			printf("*");
		}
		printf("\n");
}
	return 0;
}
