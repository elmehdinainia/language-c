#include <stdio.h>
#include <stdlib.h>
int main() {
	
   float temperature;
   printf("Enter a Temperature : ");
   scanf("%f" , &temperature );
   printf("%f" , (temperature - 32)/1.8);
   
	
	return 0;
}
