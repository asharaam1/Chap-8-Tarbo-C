/* position.c */
/* demonstrates cursor position command */
#define TRUE 1
#define CLEAR "\x1B[2J"               /* clear screen */
#define ERASE "\x1B[K"                /* erase line  */
main() 
{
	int row=1, col=1;
	printf(CLEAR);
	while (TRUE)
	{
		printf("\x1B[23;1F");            /* cursor at row=23, col=1 */
		printf(ERASE);                   /* erase line */
		printf("Type row and column number(from 10,40): ");
		scanf ("%d,%d",&row , &col);     /* get coordinates  */
		printf("\x1B[%d;%df", row , col );   /*position cursor */
		printf("8*(%d,%d)", row , col );     /* print coordinates */
	}
} 	
