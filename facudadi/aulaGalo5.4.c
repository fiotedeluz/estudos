#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");

	int opcao;
	printf("1-Saldo 2-Extrato 3-Saque 4-Sair\n");
	scanf("%d", &opcao);
	
	switch(opcao) {
	    case 1: printf("Saldo\n"); break;
	    case 2: printf("Extrato\n"); break;
	    case 3: printf("Saque\n"); break;
	    case 4: printf("Sair\n"); break;
	    default: printf("Opção inválida\n");
	}	
	return 0;
}
