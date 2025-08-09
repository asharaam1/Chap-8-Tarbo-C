/* decode.c */
/* decodes file coded with code.c */
/* to be used with redirection */
#include <stdio.h>
#define CTRL_Z '\x1A'
int main()
{
    char ch;
    while ((ch = getch()) != CTRL_Z)
        putch(ch - 1);
    putch(CTRL_Z);
}
