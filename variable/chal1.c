#include <stdio.h>
#include <stdlib.h>
int main()
{
char nome[50];
char prenome[50];
char sexe[3];
int age,nume_tele ;
printf("donner de votre prenome :" );
scanf("%s",&prenome);
printf("donner de votre nome:" );
scanf("%s",&nome);
printf("donner de votre age : " );
scanf("%d",&age);
printf("donner votre sexe : ");
scanf("%s",&sexe);
printf("donner de votre num de tele:" );
scanf("%d",&nume_tele);
printf("votre nome %s,votre prenome %s,votre sexe %s,votre age %d,votre nume_tele %d" , nome , prenome , sexe , age , nume_tele);
return 0;

}

