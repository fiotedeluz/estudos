#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	char cor;
	float valor, desc, total;
	printf("Digite o valor: ");
	scanf("%f", &valor);
	printf("Cor (a=azul, v=vermelho, b=branco): ");
	scanf(" %c", &cor);
	
	switch(cor) {
	    case 'a': desc = 30; break;
	    case 'v': desc = 20; break;
	    case 'b': desc = 10; break;
	    default: desc = 0;
	}
	total = valor - (valor * desc / 100);
	printf("Total a pagar: R$ %.2f\n", total);

}
