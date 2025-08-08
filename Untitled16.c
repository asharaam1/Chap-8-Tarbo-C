/* decode.c */  
/* decodes file coded with code.c */  
/* to be used with redirection */  
#define CTRL_z '\x1A'  
main()  
{  
    char ch;  
    while( (ch=getch()) != CTRL_Z )  
        putch(ch-1);  
    putch(CTRL_Z);  
}
