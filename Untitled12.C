/* funkey0.c */
/* assigns function key to string typed by user */
/* uses command-line arguments */
main(argc, argv) int argc;
char *argv[];
{
    int key;
    if (argc != 3)
    {
        printf("example usage: A>funkeyO 2 dir");
        exit();
    }
    key = atoi(argv[1]);
    printf("\x1B[0;%d;\"%s\";13p", key + 58, argv[2]);
}
