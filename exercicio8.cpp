#include <iostream>
int main(){
    float altura, peso;
     
    printf("Escreva sua altura em metro e depois seu peso em kg: ");
    scanf("%f", &altura);
    scanf("%f", &peso);

    float imc = (peso/(altura * altura));
    printf("Seu imc é:%.2f\n", imc);

    if (imc < 18.5){
        printf("Categoria: Abaixo do peso\n");
    }
    else if (imc > 18.5 && imc < 25){
        printf("Categoria: Peso normal\n");
    }
    else if (imc > 25 && imc < 30){
        printf("Categoria: Sobrepeso\n");
    }
    else
    {
        printf("Categoria: Obeso\n");
    }

    return 0;
}