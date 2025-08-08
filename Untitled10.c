/* assign.c */
/* assigns function key to string typed by user */
#include<stdio.h>
main()
{
	char string[81];
	int key;
	printf("Enter number of function key: ");
	gets(string);
	key = atoi(string);
	puts("Enter string to assign to that key: ");
	gets(string);
	printf("\x1B[O;%d;\"%s\";13p", key+58, string);
}
