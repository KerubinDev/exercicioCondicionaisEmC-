#include <iostream>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0){
        printf("O numero %d é Positivo. \n", numero);
    }
    else{
        printf("O numero %d é Negativo. \n", numero);
    }

    return 0;
}