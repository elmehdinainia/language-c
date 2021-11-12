#include <stdio.h>
#include <stdlib.h>
main()
{
	float f , c;
	printf("entrer fahranhet : ");
	scanf("%f",&f);
	c = f - 32 / 1.8 ;
	printf(" resultqt %f \n",c);
	if (c<0)
	{
		printf(" tres froid");
	}
		else if  (c>0  && c<10 )
    {
    	printf("froid");
	}
	 else if (c>10  && c<40 )
	
    {
    	printf("chaud");
	}
	 else if(c>40)
	{
		printf("tres chaud");
	}
	
	 
}
