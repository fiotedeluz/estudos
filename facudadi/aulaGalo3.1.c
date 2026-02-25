#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale (LC_ALL, "");
	
	char nome[2][50];
	char aux[50];
	
	//int opt;
	//char n1e2[2][8] = {"lindo", "linda"};
	
	//printf ("voce quer ver 1 ou 2");
	//scanf ("%d",&opt);
	
	//printf ("a ordem original dos nomes é\n 1- %s\n", n1e2[0]);
	//printf ("2- %s\n", n1e2[1]);
	
	printf ("escreva o primeiro nome\n");
	scanf ("%s", &nome[0]);
	
	printf ("escreva o segundo nome\n");
	scanf ("%s", &nome[1]);
	
	printf ("o primeiro nome é %s\n",nome[0]);
	printf ("o segundo nome é %s\n",nome[1]);
	
	strcpy (aux,nome[0]);
	strcpy (nome[0],nome[1]);
	strcpy (nome[1],aux);

	printf ("o segundo nome é %s\n",nome[0]);
	printf ("o primeiro nome é %s\n",nome[1]);


	
	
	return 0;
}
