
#include <iostream>
int main(){
    int lado1;
    int lado2;
    int lado3;

    printf("Escreva o valor do primeiro lado: ");
    scanf("%d", &lado1);
     printf("Escreva o valor do segundo lado: ");
    scanf("%d", &lado2);
     printf("Escreva o valor do terceiro lado: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3){
        printf("O triangulo é equilátero\n");
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("O triangulo é Isósceles\n");
    }
    else
    {
        printf("O triangulo é Escaleno\n");
    }
}


