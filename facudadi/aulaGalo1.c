#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
	int a, b, c;
	printf ("digite um numeros \n");
	scanf ("%d", &a);
	
	if (a % 2 == 0) { printf ("%d � par", a);
	} else { printf ("%d � impar", a);
	}
	
	
    return 0;
}

