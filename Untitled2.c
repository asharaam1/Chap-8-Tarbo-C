/* extend.c */
/* tests extended codes */
#include<stdio.h>
int main()
{
	int key, key2;
	while( (key=getch()) !='X' )      /* read keyboard */
	if( key == 0 )                    /* if extended code, */
	{ 
		key2  = getch();                /* read second code */
		switch(key2)
		{
			case 59:
			    printf("Function key 1\n"); 
				break;
			case 60:
				printf("Function key 2\n"); 
				break;
			case 75:
			    printf("Left arrow\n");  
				break;
			case 77:
			    printf("Right arrow\n"); 
				break;
			default:	   	  	   
		  		printf("Some other extended code\n");
		}
   
	}
	else
	printf("Normal code: %3d=%c\n", key, key);
} 

