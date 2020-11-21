#include<stdio.h>
/*
	Premier commentaire
*/
int f(){return(0);}
int main()
{
	char *s="#include<stdio.h>%1$c/*%1$c%3$cPremier commentaire%1$c*/%1$cint f(){return(0);}%1$cint main()%1$c{%1$c%3$cchar *s=%2$c%4$s%2$c;%1$c%3$cprintf(s, 10, 34, 9, s);%1$c%3$c/*%1$c%3$c%3$cDeuxieme commentaire%1$c%3$c*/%1$c%3$cf();%1$c}";
	printf(s, 10, 34, 9, s);
	/*
		Deuxieme commentaire
	*/
	f();
}