/* menu.c */
/* demonstrates simple menu */
#define TRUE 1
#define NUM 5				/* number of menu items */
#define CLEAR "\x1B[2J"		/* clear screen */
#define ERASE "\x1B[K"		/* erase line */
#define NORMAL "\x1B[0m"	/*  normal attribute */
#define REVERSE "\x1B[7m"	/* reverse video attribute */
#define HOME "\x1B[1;1F"	/* cursor to top left */
#define BOTTON "\x1B[20;1F" /* cursor to lower left */
#define U_ARRO 72			/* up_arrow key */
#define D_ARRO 80			/* down_ arrow key */
#define INSTANT 82			/* "INS" KEY */
main()
{
	static char *items[NUM] = /* menu items */
		{
			"OPEN",
			"CIOSE",
			"SAVE",
			"PRINT",
			"QUIT",
		};
	int curpos; /* position of selected item */
	int code;
	printf(CLEAR); /* clear screen */
	curpos = 0;	   /* select top of menu */
	while (TRUE)
	{
		display(items, NUM, curpos); /* display menu */
		code = getcode();			 /* check keyboard */
		switch (code)				 /* act on key pressed */
		{
		case U_ARRO:
			if (curpos > 0)
				--curpos;
			break;
		case D_ARRO:
			if (curpos < NUM - 1)
				++curpos;
			break;
		case INSTANT:
			action(curpos);
			break;
		}
	}
}

/* display() */
/* display menu */
display(arr, size, pos) char *arr[];
int size, pos;
{
	int j;
	printf(HOME);			   /* cursor to top left */
	for (j = 0; j < size; j++) /*  for each menu item */
	{
		if (j == pos)				/* if selected, */
			printf(REVERSE);		/* print in reverse video */
		printf("%s\n", *(arr + j)); /* print item */
		printf(NORMAL);				/* restore normal attribute  */
	}
	printf(BOTTOM); /* cursor to lower left */
}

/* getcode() */
/* gets keyboard code  */
getcode()
{
	int key;
	while (getch() != 0) /* wait for initial 0 */
		;				 /* (ignores normal keys) */
	return (getch());	 /* return code */
}

/* action() */
/* performs action based on cursor position */
action(pos) int pos;
{
	printf(ERASE); /* erase lower line */
	switch (pos)
	{
	case 0:
		printf("OPEN");
		break; /* calls to routines */
	case 1:	   /* could be inserted here */
		printf("CLOSE");
		break;
	case 2:
		printf("SAVE");
		break;
	case 3:
		printf("print");
		break;
	case 4:
		exit(); /* exit from program */
	}
}
