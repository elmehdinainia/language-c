#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char car;
	printf("donner un cararctaire : ");
	scanf("%c",&car);
	switch (car)
	{   
	 case 'e':
	 	{
	 		printf("ce caractaire sest voyelle : "); 
			 break;	
		 }

    case'u':
    	{
		printf("ce caractaire est voyelle");
		break;
		}
    	
    case 'a':
    	{
    	printf("ce caractaire est voyelle");
    	break;
	
		}
	case 'i':
	    {
	  	printf("ce caractaire est voyelle");
	  	break;
		}

	case 'y':
    	{
    	printf("ce caractaire est voyelle");
    	break;
    	}
    	default:
    		{
    			printf(" ce caractaire n"est pas voyelle");
    			break;
			}
			
	   	
}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
