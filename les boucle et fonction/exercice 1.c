#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nbr,i;
	printf("donner votre nombre\n");
	scanf("%d",&nbr);
	printf("table de multiplication de nombre %d\n",nbr);

	for(i=1;i<=10;i++){
	printf("%d*%d=%d\n",nbr,i,nbr*i);
	
	}

	
	
	return 0;
}
