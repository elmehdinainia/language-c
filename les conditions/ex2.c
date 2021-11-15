#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int nbr;
	printf("donner une nombre : ");
	scanf("%d",&nbr);
	 
	 if ( nbr<0)
	 {
	 	printf("le nombre est negatif");
	 }
    else if (nbr>0)
	{
		printf("le nombre est positf");
	}
	else 
    {
    	printf("le nombre est null");
	}
    
	return 0;
}
