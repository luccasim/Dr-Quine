#include <stdio.h>
/*
	Salut
*/
int fin(void){
/*
	Hello World
*/
	return(0);
}

int main(void)
{
	char	*a="#include <stdio.h>%c/*%c%cSalut%c*/%cint fin(void){%c/*%c%cHello World%c*/%c%creturn(0);%c}%c%cint main(void)%c{%c%cchar%c*a=%c%s%c;%c%cprintf(a,10,10,9,10,10,10,10,9,10,10,9,10,10,10,10,10,9,9,34,a,34,10,9,10,9,10,9);%c%creturn(fin());%c}";
	printf(a,10,10,9,10,10,10,10,9,10,10,9,10,10,10,10,10,9,9,34,a,34,10,9,10,9,10,9);
	return(fin());
}