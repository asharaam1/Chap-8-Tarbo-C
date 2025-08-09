
/* kbdtest.c */
/* prints code of keyboard key */
#include <stdio.h>
main()
{
    char key, key2;
    while( (key=getch()) != 'X' )     /* read keyboard */
    if(key==0 )                       /* if extended code,*/
    {
    	key2 = getch();                   /* read second code */
		printf("%3d %3d\n", key, key2);
	} 
	else	
		printf("%3d\n", key);                 /* not extended code */ 
} 

 
