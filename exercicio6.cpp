#include <iostream>
int main(){
    int ano;

    printf("Digite o ano escolhido: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0){
        printf("O ano é bisexto\n");
    }
    else
    {
        printf("O ano não é bisexto\n");
    }
}