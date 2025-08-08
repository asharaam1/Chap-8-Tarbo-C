/* draw.c */
/* moves cursor on screen, Leaves trail */
#define CLEAR  "\x1B[2J"
#define C_LEFT "\x1B[D"
#define C_RITE "\x1B[C"
#define C_ UPUP "\x1B[A" 
#define C_ DOWN "\x1B[B"
#define L_ARRO 75
#define R_ ARRO 77   
#define U_ ARRO 72
#define D_ ARRO 80
#define ACROSS  205  
#define UPDOWN 186
main()
{
	int key;
	printf(CLEAR);
	while   (   (key=getch() )  == 0  )
	{
		key=getch();
		switch  (key) 
		{
			case L_ARRO :  printf(C_LEFT); putch(ACROSS);
			break;
			case R_ARRO : printf(C_RITE);  putch(ACROSS);
			break;
			case U_ARRO : printf(C_UPUP);  putch (UPDOWN);
			break;
			case D_ARRO : printf(C_DOWN);  putch (UPDOWN); 
			break;
		}
		printf(C_LEFT);
	}
}
