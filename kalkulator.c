#include <stdio.h>

int main(){
    int a , b;
    printf("podaj liczbe ");
    scanf("%i", &a);
    printf("podaj drugą liczbę ");
    scanf("%i", &b);
    while (getchar() != '\n');
    return 0;
}