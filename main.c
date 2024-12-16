#include <stdio.h>
int policz(int a, int b) {
    return a + b;
}

int main(void) {
    int a = 2, b = 3;
    printf("W pierwszym branchu; 2 + 3 = %d",policz(a,b));
    return 0;
}
