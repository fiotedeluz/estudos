#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	int i; 
	int s;
	float valor = 20;
	float tolta, desconto;
	
	printf ("Digite sua Idade menó\n"); 
	scanf ("%d",&i);
	
	printf ("you is Studin?, Digite 1 para (sim) e 2 para (nao) \n"); 
	scanf ("%d",&s);
	
	if(i <= 12){
	desconto = 50;
	}else
	 if(i > 12 && i <= 17){
	desconto = 30;
	} else 
	if (i >= 60){
		desconto = 50;
	} else 
	if (i >17 && i<60 && s == 1 ) {
	desconto = 40;
	}
	
	tolta = valor - (valor * desconto/100);
	printf("Total a pagar: R$ %.2f\n", tolta);

}
