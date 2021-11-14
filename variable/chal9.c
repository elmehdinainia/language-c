#include <stdio.h>
#include <Math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x1,x2,y1,y2;
	float MN;
	printf("ecrire x1 : ");
	scanf("%d",&x1);
		printf("ecrire x2 : ");
		scanf("%d",&x2);
			printf("ecrire y1 : ");
			scanf("%d",&y1);
				printf("ecrire y1 : ");
				scanf("%d",&y2);
				
				MN=sqrt(pow(x2-x1,2) + pow(y2-y1,2));
				printf("la distance entre deux point donnés: %f",MN);

				


	
	
	return 0;
}
