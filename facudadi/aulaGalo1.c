#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
	int a, b, c;
	printf ("digite um numeros \n");
	scanf ("%d", &a);
	
	if (a % 2 == 0) { printf ("%d é par", a);
	} else { printf ("%d é impar", a);
	}
	
	
    return 0;
}

