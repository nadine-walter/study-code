
#include <stdio.h>

int main(void) {
    int zahl1;
    int ergebnis;
    int zahl2;
    char operator;
    scanf("%d", &zahl1);
    scanf(" %c", &operator);
    scanf("%d" , &zahl2);
    

    printf("Rechenoperator:");
    

    switch (operator) {
        case '+':
            ergebnis = zahl1 + zahl2;
            break;
        
        case '-': 
            ergebnis = zahl1 - zahl2;
            break;

    }
    printf("%d", ergebnis);
    return 0;
}

