#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void somme(int a,int b){
	int S;
	S=a+b;
	printf("le resultat est %d",S);
	
}

int main() {
	int X,Y;
	printf("entrer X : ");
	scanf("%d",&X);
	printf("entrer Y: ");
	scanf("%d",&Y);
	somme(Y,Y);
	
	return 0;
}
