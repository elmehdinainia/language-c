#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nbr,choix;
	printf("entrer un annes :  ");
	scanf("%d",&nbr);
	printf("donner le choix \n 1. Mois \n 2:jours \n 3:heures \n 4:minutes \n 5:secondes\n");
	scanf("%d",&choix);
	switch(choix)
	{
	
	case 1:
		printf("le mois est = %d",nbr*12);
		break;
	case 2:
		printf("le jours est = %d",nbr*12*30);
		break;
	case 3:
		printf("le heures est = %d",nbr*12*30*24);
		break;
	case 4:
	   	printf("le munites est = %d",nbr*12*30*24*60);
		break;
	case 5:
		printf("le secondes est = %d",nbr*12*30*24*60*60);
		break;
	}
		
	return 0;
}
