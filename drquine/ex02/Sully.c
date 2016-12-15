#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CODE "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#define CODE %c%s%c%cint main(int ac, char **av)%c{%c%cchar name[100];%c%cint i = %d;%c%cFILE *f;%c%c%cif (i<=0)%c%c%creturn(0);%c%cac = (strstr(av[0],%cSully_%c))? i - 1 : i;%c%csprintf(name,%cSully_%%d.c%c,ac);%c%cf = fopen(name,%cw%c);%c%cfprintf(f,CODE,10,10,10,34,CODE,34,10,10,10,9,10,9,ac,10,9,10,10,9,10,9,9,10,9,34,34,10,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10);%c%cfclose(f);%c%cchar cmd[100];%c%csprintf(cmd, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d && ./Sully_%%d%c,name,ac,ac);%c%csystem(cmd);%c%creturn (0);%c}"
int main(int ac, char **av)
{
	char name[100];
	int i = 5;
	FILE *f;

	if (i<=0)
		return(0);
	ac = (strstr(av[0],"Sully_"))? i - 1 : i;
	sprintf(name,"Sully_%d.c",ac);
	f = fopen(name,"w");
	fprintf(f,CODE,10,10,10,34,CODE,34,10,10,10,9,10,9,ac,10,9,10,10,9,10,9,9,10,9,34,34,10,9,34,34,10,9,34,34,10,9,10,9,10,9,10,9,34,34,10,9,10,9,10);
	fclose(f);
	char cmd[100];
	sprintf(cmd, "clang -Wall -Wextra -Werror %s -o Sully_%d && ./Sully_%d",name,ac,ac);
	system(cmd);
	return (0);
}