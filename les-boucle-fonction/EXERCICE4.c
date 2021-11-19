#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nbr,inverse=0;
	printf("donner un nombre : ");
	scanf("%d",&nbr);
	printf("inverse est :");
	while(nbr!=0){
		inverse=nbr%10;
		nbr=nbr/10;
		printf("%d",inverse);
		
		
	}
	
	
	
	
	
	return 0;
}
