/* funkey.c */  
/* assigns function key to string typed by user */  
/* uses any number of command-line arguments */  
main(argc,argv)  
int argc;  
char *argv[];  
{  
    int key, j;  
    char string[80];  
    if(argc < 3) /* if too few */  
        { /* arguments, */  
        printf("example usage: A>funkey 2 dir *.c");  
        exit(); /* then exit */  
        }  
    key = atoi(argv[1]);  
    strcpy(string,argv[2]);  
    for( j=3; j<argc; j++)  
        {  
        strcat(string," "); /* add space */  
        strcat(string,argv[j]); /* add word */  
        }  
    if( strcmp(string, "null") == 0) /* if string is "null" */  
        strcpy(string, "'"); /* no string */  
    printf("\x1B[0;%d;\"%s\";13p", key+58, string);  
}  

