#include <iostream>
int main(){
    int leads;

    printf("quantos leads tiveram: ");
    scanf("%d", &leads);

    if (leads == 5 || leads < 5){
        printf("Baixa quantidade ;-; \n");
    }
    else if (leads > 5 && leads <= 10)
    {
        printf("quantidade esperada :)  \n");
    }
    else
    {
        printf("Quantidade alta :D\n");
    }
}