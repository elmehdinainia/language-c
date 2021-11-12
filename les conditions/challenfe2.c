#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int nbr;
	printf("donner une nombre : ");
	scanf("%d",&nbr);
	 
	 if ( nbr==0)
	 {
	 	printf("le nombre est null");
	 }
	 
	

    else if (nbr%2==0)
	{
		printf("le nombre %d est paire",nbr);
	}
	else 
    {
    	printf("le nombre est inpaire");
	}
    
	return 0;
}

