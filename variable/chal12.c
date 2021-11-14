#include<stdio.h>
#include<math.h>
int main(){
	    int a ,b,c ,x;
	    printf("entrer un  nombre de  3 valeur  :\n");
	    scanf("%d",&x);
	   
	   a =((x%100)%10);
	    b=((x%100)/10);
	    c=x/100;
	    printf(" %d%d%d",a,b,c);
	
		     }
