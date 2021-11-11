#include <stdio.h>
#include <stdlib.h>
int main() {
	
   float distance;
   printf("Enter a distance :");
   scanf("%f" , &distance);
   printf("Your distance in miles is : %.2f M" , distance*1000*1.609);
   
	return 0;
}
