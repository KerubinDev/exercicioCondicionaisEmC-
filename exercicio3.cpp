#include <iostream>
int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0 ){
        printf("Esse numero é divisivel por 3 e 5 \n");
    }
    else
    {
        printf("Esse numero não é divisivel por 3 e 5 \n");
    }

    return 0;
}