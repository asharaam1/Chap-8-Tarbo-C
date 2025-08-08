/* code.c */  
/* encodes file */  
/* to be used with redirection */  
#define CTRL_Z '\x1A'  
main()  
{  
    char ch;  
    while( (ch=getch()) != CTRL_Z )  
        putch(ch+1);  
    putch(CTRL_Z);  
}
