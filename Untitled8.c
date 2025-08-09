/* attrib.c */
/* changes graphics attributes */
#define NORMAL "\x1B[0m"
#define BOLD "\x1B[1m"
#define UNDER "\x1B[4m"
#define BLINK "\x1B[5m"
#define REVERSE "\x1B[7m"
main()
{
	printf("NORMMAL %s Blinking %s NORMAL \n\n", BLINK, NORMAL);
	printf("NORMAL %s Bold %s NORMAL\n\n", BOLD, NORMAL);
	printf("NORMAL %s  Underlined %s NORMAL\n\n", UNDER, NORMAL);
	printf("NORMAL %s  Reversed %s  Normal\n\n", REVERSE, NORMAL);
	printf("%s %s Reversed and blinking %s", BLINK, REVERSE, NORMAL);
}

// code run
