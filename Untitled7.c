/* putmenus.c */
/* demonstrates placing text on screen  */
#define SIZE1 5			/* items on menu1 */
#define SIZE2 4			/* items on menu2  */
#define CLEAR "\x1B[2J" /* clears  screen  */
main()
{
	static char *menu1[] = /* first menu */
		{
			"Open"
			"Close",
			"Print",
			"Quit",
		};
	static char *menu2[] = /* second menu  */
		{
			"Cut",
			"Copy",
			"Paste",
			"Reforat",
		};
	printf(CLEAR);			   /* clear screen */
	display(menu1, SIZE1, 20); /* display first menu */
	display(menu2, SIZE2, 40); /* display second menu */
	getch();				   /* exit on any keystroke */
}

/* display() */
/* displays menu at given column number */
display(arr, size, hpos) char *arr[]; /* array to display */
int size;							  /* size of array  */
int hpos;							  /* column number  */
{
	int j = 0;
	for (j = 0; j < size; j++) /* for each menu item */
	{
		printf("\x1B[%d;%df", j + 1, hpos); /* position cursor */
		printf("\%s\n", *(arr + j));		/* print item */
	}
}
