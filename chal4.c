#include<stdio.h>
#include<stdlib.h>
main(){
float  meile,metre,km;
printf("donner la valeur de meile : ");
scanf("%f",&meile);
km = meile/1.609;
metre=km*1000;
printf("%.2f metre = %.2f km ",metre,km);

return 0;
}













