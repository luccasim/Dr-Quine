#include <stdio.h>
/*
	Salut
*/
void fin(void){
/*
	Hello World
*/
}

int main(void)
{
	char	*a="#include <stdio.h>%c/*%c%cSalut%c*/%cvoid fin(void){%c/*%c%cHello World%c*/%c}%c%cint main(void)%c{%c%cchar%c*a=%c%s%c;%c%cprintf(a,10,10,9,10,10,10,10,9,10,10,10,10,10,10,9,9,34,a,34,10,9,10,9,10,9);%c%creturn(0);%c}";
	printf(a,10,10,9,10,10,10,10,9,10,10,10,10,10,10,9,9,34,a,34,10,9,10,9,10,9);
	return(0);
}