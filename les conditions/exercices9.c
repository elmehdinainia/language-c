#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int A,B,MAX;
	printf("donner une nombre A : ");
	scanf("%d",&A);
		printf("donner une nombre B : ");
	scanf("%d",&B);
	MAX=A;
	 
	 if ( B>A)
	 {
	 	printf("le MAX est  : %d",B);
	 }
    else {
	
		printf("le MAX : %d",MAX);
}
	
    
	return 0;
}

