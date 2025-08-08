/* diag.c */
/* moves cursor diagonally */
main() 
{
	while( getche() != '.')             /* print character */
	printf("\x1B[B");               /* cursor down */
} 
