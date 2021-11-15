#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nbr;
	printf("donner un nombre:");
	scanf("%d",&nbr);
	if (nbr<0)
	printf("negatif");
	else if (nbr>0)
	printf("positif");
	else
    printf("null");
	
	return 0;
}
