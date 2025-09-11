#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	float o;
	
	printf ("digite o orçamento da viagem: \n");
	scanf ("%f", &o);
	
	if (o >= 1000) {printf ("viagem internacional, yei");
	}
	 if (o <= 999) {printf ("viagem nacional, ;-;");
	}
	else {printf ("erro");
	}
	
	
	
	return 0;
}
