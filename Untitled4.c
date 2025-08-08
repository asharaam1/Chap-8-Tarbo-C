/* diag.c */
/* moves cursor diagonally */
#define C_DOWN "\x1B[B"                 /* move cursor down */
main() 
{
	while( getche() != '.')             /* print character */
		printf(C_DOWN);                  /* cursor down */ 
} 

   
 
