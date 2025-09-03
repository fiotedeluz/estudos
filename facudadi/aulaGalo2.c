#include <stdio.h>
#include <locale.h>

//#define SALARIOMINIMO 1525.00
#define OPTSOMA 1
#define OPTSUBT 2


int main () {
	setlocale (LC_ALL, "");
	
	int opt;
	int a;
	int b;
	int c;
	
	printf ("selecione 1 para somar e 2 para subtrair\n");
	scanf ("%d", &opt);
	

	if (opt == OPTSOMA) {
		printf ("agora escolha o primeiro e segundo digito\n");
		scanf ("%d", &a);
		printf ("\n");
	
		scanf ("%d", &b);
		printf ("\n");
		c = a + b;
		printf ("%d",c);
	
	} if (opt == OPTSUBT) {
				printf ("agora escolha o primeiro e segundo digito\n");
		scanf ("%d", &a);
		printf ("\n");
	
		scanf ("%d", &b);
		printf ("\n");
		c = a - b;
		printf ("%d",c);
	}
	
	
//	float anual = SALARIOMINIMO * 12;
//	printf ("o salario anual é R$ %.2f\n" anual);
	
	return 0;
}

