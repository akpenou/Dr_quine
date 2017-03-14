#include <stdio.h>

#define VAR int argc, char **argv
#define DOJOB if (argc != 1){ printf("Usage: ./Grace_kid"); (void **)argv; return (1);}

/*
	Ce define definira le main de la fonction
*/

#define FONCTION(X) int main(VAR){DOJOB FILE *fl = fopen(X, "w+");const char *s = "#include <stdio.h>%c%c#define VAR int argc, char **argv%c#define DOJOB if (argc != 1){ printf(%cUsage: ./Grace_kid%c); (void **)argv; return (1);}%c%c/*%c%cCe define definira le main de la fonction%c*/%c%c#define FONCTION(X) int main(VAR){DOJOB FILE *fl = fopen(X, %cw+%c);const char *s = %c%s%c;fprintf(fl, s, 10, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10, 34, 34, 34, s, 34, 10, 34, 34, 10);fclose(fl);return(0);}%cFONCTION(%cGrace_kid.c%c)%c";fprintf(fl, s, 10, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10, 34, 34, 34, s, 34, 10, 34, 34, 10);fclose(fl);return(0);}
FONCTION("Grace_kid.c")
