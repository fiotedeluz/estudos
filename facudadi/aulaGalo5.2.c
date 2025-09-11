#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	float nota;
    printf("Digite a nota final: ");
    scanf("%f", &nota);

    if (nota >= 60) {
        printf("Aprovado\n");
    } else {
        if (nota >= 50) {
            printf("Em recuperação\n");
        } else {
            printf("Reprovado\n");
        }
    }
	
	return 0;
}
