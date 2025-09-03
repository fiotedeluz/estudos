#include <stdio.h>
#include <locale.h>


int main () {
	setlocale (LC_ALL, "");
	int  numeros [4] = {1,2,3,4};
	printf ("o numero é %d", numeros[2]);
	
	return 0;
}
