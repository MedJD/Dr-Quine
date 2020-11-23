#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 5;
	if (i < 0)
		return (0);
	i = strcmp(__FILE__, "Sully.c") == 0 ? i : i-1;
	char b[200];
	sprintf(b, "Sully_%d.c", i);
	FILE *f = fopen(b, "w");
	char b2[200];
	char *code = "#include<stdio.h>%1$c#include<stdlib.h>%1$c#include<string.h>%1$cint main()%1$c{%1$c%2$cint i = %5$d;%1$c%2$cif (i < 0)%1$c%2$c%2$creturn (0);%1$c%2$ci = strcmp(__FILE__, %3$cSully.c%3$c) == 0 ? i : i-1;%1$c%2$cchar b[200];%1$c%2$csprintf(b, %3$cSully_%%d.c%3$c, i);%1$c%2$cFILE *f = fopen(b, %3$cw%3$c);%1$c%2$cchar b2[200];%1$c%2$cchar *code = %3$c%4$s%3$c;%1$c%2$cfprintf(f, code, 10, 9, 34, code, i);%1$c%2$cfclose(f);%1$c%2$csprintf(b2, %3$cgcc -Wall -Wextra -Werror %%1$s -o Sully_%%2$d%3$c, b, i);%1$c%2$csystem(b2);%1$c%2$cif (i > 0)%1$c%2$c{%1$c%2$c%2$csprintf(b2, %3$c./Sully_%%d%3$c, i);%1$c%2$c%2$csystem(b2);%1$c%2$c}%1$c%2$creturn (0);%1$c}%1$c";
	fprintf(f, code, 10, 9, 34, code, i);
	fclose(f);
	sprintf(b2, "gcc -Wall -Wextra -Werror %1$s -o Sully_%2$d", b, i);
	system(b2);
	if (i > 0)
	{
		sprintf(b2, "./Sully_%d", i);
		system(b2);
	}
	return (0);
}
