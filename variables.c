#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 28;
    float height = 172.5f;
    double weight = 80.5;
    char surnameSymbol = 'S';
    char surnameString[] = "Szilveszter";
    bool isOnline = true;

    printf("[int] : \t%%d - Value: %d \n", age);
    printf("[float] : \t%%f - Value: %f \n", height);
    printf("[double] : \t%%f - Value: %f \n", weight);
    printf("[char] : \t%%c - Value: %c \n", surnameSymbol);
    printf("[string] : \t%%s - Value: %s \n", surnameString);
    printf("[boolean] : \t%%d - Value: %d \n", isOnline);

    return 0;
}