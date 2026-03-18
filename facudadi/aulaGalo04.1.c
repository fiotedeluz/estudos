#include <stdio.h>

int main() {
    int a = 5;
	int b = 10;
	int c = 5;

    printf("\n (%d == %d) && (%d == %d) = %d",a,b,a,c, ((a == b) && (a == c)));
    printf("\n (%d == %d) || (%d == %d) = %d",a,b,a,c,  ((a == b) || (a == c)));
    printf("\n !(%d == %d) || (%d == %d) = %d",a,b,a,c,  !((a == b) || (a == c)));

    return 0;
}

