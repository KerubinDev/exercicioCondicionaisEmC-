#include <iostream>
int main(){
    float altura, peso;
    int imc;

    printf("Escreva sua altura em metro e depois seu peso em kg: ");
    scanf("%e", &altura);
    scanf("%e", &peso);

    imc = (altura / (peso * peso));

    printf("Seu imc é:");
}