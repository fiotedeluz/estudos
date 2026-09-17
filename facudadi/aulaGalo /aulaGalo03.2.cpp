#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale (LC_ALL, "");
	
	int idade[3] = {0, 0, 0};
	float media = {0};
	
	printf ("informe a idade da pessoa 1\n");
	scanf("%d", &idade[0]);
	
	printf("informe a idade da pessoa 2\n");
	scanf ("%d", &idade[1]);
	
	printf("informe a idade da pessoa 3\n");
	scanf("%d", &idade[2]);
	
	media = (idade[0] + idade[1] + idade[2] / 3);
	printf ("a media é: %f", media);
	
return 0;	
}
