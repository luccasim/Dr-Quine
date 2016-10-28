#include <stdio.h>
#include <stdlib.h>
#define CODE "#include <stdio.h>%c#include <stdlib.h>%c#define CODE %c%s%c%cint main(void)%c{%c%cchar name[100];%c%cint i = %d;%c%cFILE *f;%c%c%cif (i<=0)return(0);%c%csprintf(name,%cSully_%%d.c%c,i--);%c%cf = fopen(name,%cw%c);%c%cfprintf(f,CODE,10,10,34,CODE,34,10,10,10,9,10,9,i,10,9,10,10,9,10,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10);%c%cfclose(f);%c%cchar cmd[100];%c%csprintf(cmd, %cclang -Wall -Wextra -Werror %%s && ./a.out%c,name);%c%csystem(cmd);%c%creturn (0);%c}"
int	main(void)
{
	char name[100];
	int i = 5;
	FILE *f;

	if (i<=0)return(0);
	sprintf(name,"Sully_%i.c",i--);
	f = fopen(name,"w");
	fprintf(f,CODE,10,10,34,CODE,34,10,10,10,9,10,9,i,10,9,10,10,9,10,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10);
	fclose(f);
	char cmd[100];
	sprintf(cmd, "clang -Wall -Wextra -Werror %s && ./a.out",name);
	system(cmd);
	return (0);
}