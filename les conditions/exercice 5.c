#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c,d,dlt;
	printf("entrer la valeur de a : ");
	scanf("%f",&a);
		printf("entrer la valeur de b : ");
		scanf("%f",&b);
			printf("entrer la valeur de c : ");
			scanf("%f",&c);
			printf("delta = %f",(b*b)-4*(a*c));
			if (dlt>0){
			float result1,result2;
			result1 = (-b+sqrt(dlt))/(2*a);
						result2= (-b-sqrt(dlt))/(2*a);
						printf(" x1 = %f , x2 = %f",result1,result2);
					}
		   else if (dlt<0){
		   	printf(" x = %f",-b/(2*a));
		
		   }
		else {
					   printf(" aucun de solluton");

		}
		 
		       

			
	return 0;
			

}

			


