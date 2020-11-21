#include <stdio.h>
#define FICHIER "Grace_kid.c"
#define CODE "#include <stdio.h>%1$c#define FICHIER %2$c%3$s%2$c%1$c#define CODE %2$c%4$s%2$c%1$c#define MAIN(x)int main(){fprintf(fopen(FICHIER, x), CODE, 10, 34, FICHIER, CODE, 9);}%1$cMAIN(%2$cw%2$c)%1$c/*%1$c%5$cCommentaire%1$c*/"
#define MAIN(x)int main(){fprintf(fopen(FICHIER, x), CODE, 10, 34, FICHIER, CODE, 9);}
MAIN("w")
/*
	Commentaire
*/