#include <iostream>
int main(){
    int retirada;
    int saldo;

    printf("Quanto você deseja sacar da sua conta: ");
    scanf("%d", &retirada);

    if (retirada < 0 || retirada > saldo){
        printf("Retirada não pode ser realizada D: \n");
    }
    else
    {
        printf("Retirada realizada com sucesso :D  \n");
    }
}