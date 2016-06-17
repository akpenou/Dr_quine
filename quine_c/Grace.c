#include <stdio.h>

#define VAR int argc, char **argv
#define DOJOB if (argc != 1){ printf("Usage: ./Grace_kid");return (0);}

/*
	Ce define definira le main de la fonction
*/

#define FONCTION(X) int main(VAR){DOJOB FILE *fl = fopen(X, "w+");const char *s = "#include <stdio.h>%c%c#define VAR int argc, char **argv%c#define DOJOB if (argc != 1){ printf(%cUsage: ./Grace_kid%c);return (0);}%c%c/*%c%cCe define definira le main de la fonction%c*/%c%c#define FONCTION(X) int main(VAR){DOJOB FILE *fl = fopen(X, %cw+%c);const char *s = %c%s%c;printf(s, 10, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10, 34, 34, 34, s, 34, 10, 34, 34, 10);fclose(fl);return(0);}%cFONCTION(%cGrace_kid.c%c)%c";printf(s, 10, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10, 10, 34, 34, 34, s, 34, 10, 34, 34, 10);fclose(fl);return(0);}

FONCTION("Grace_kid.c")
