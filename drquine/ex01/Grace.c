#include <stdio.h>
/*
	easy
*/
#define CODE "#include <stdio.h>%c/*%c%ceasy%c*/%c#define CODE %c%s%c%c#define	WRITE fprintf(f,CODE,10,10,9,10,10,34,CODE,34,10,10,34,34,34,34,10)%c#define FT(X) int main(void){FILE *f=fopen(%cGrace_kid.c%c, %cw%c); WRITE; fclose(f);}%cFT(X)"
#define	WRITE fprintf(f,CODE,10,10,9,10,10,34,CODE,34,10,10,34,34,34,34,10)
#define FT(X) int main(void){FILE *f=fopen("Grace_kid.c", "w"); WRITE; fclose(f);}
FT(X)