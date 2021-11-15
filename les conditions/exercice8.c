#include <stdio.h>
#include <stdlib.h>

/* code ascll*/

int main() {
	char caractaire;
	printf("donner un caractaire : ");
	scanf("%c",&caractaire);
	if (caractaire>'a'&& caractaire <'z')
		printf("le caractaire c'est muniscul ");
		else if (caractaire>'A'&& caractaire<'Z')
			printf("le caractaire c'est majiscul ");
		
	return 0;
}
