#include <iostream>
int main(){
    char operador;
    float valor1, valor2;

    printf("Digite um dos operadores (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Escreva os 2 valores: ");
    scanf("%e %e", &valor1, &valor2);

    switch (operador)
    {
    case '+':
            printf("Resultado: %.2\n"lf, valor1 + valor2);
        break;
         
         case '-':
            printf("Resultado: %.2lf\n", valor1 - valor2);
        break;
         
         case '*':
            printf("Resultado: %.2lf\n", valor1 * valor2);
        break;
         
         case '/':
            if (valor2 != 0){
                printf("Resultado: %.2lf\n", valor1 / valor2);
            }
            else
            {
                printf("Erro: Não é possivel dividir por 0\n");
            }
        break;
    default:
     printf("Erro: Operador invalido\n");
        break;
    }
    return 0;
}