#include <stdio.h>
// easy
#define CODE "#include <stdio.h>%c// easy%c#define CODE %c%s%c%c#define	WRITE fprintf(f,CODE,10,10,34,CODE,34,10,10,34,34,34,34,10)%c#define MAIN int main(void){FILE *f=fopen(%cGrace_kid.c%c, %cw%c); WRITE; fclose(f);}%cMAIN"
#define	WRITE fprintf(f,CODE,10,10,34,CODE,34,10,10,34,34,34,34,10)
#define MAIN int main(void){FILE *f=fopen("Grace_kid.c", "w"); WRITE; fclose(f);}
MAIN