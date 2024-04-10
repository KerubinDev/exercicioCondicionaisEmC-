#include <iostream>
int main(){
    float x, y;

    printf("Escreva os valores de x e y:");
    scanf("%f", &x);
    scanf("%f", &y);

    if (x > 0 && y > 0){
        printf("Já que ambos são positivos eles estão no primeiro quadrante\n");
    }
    else if (x < 1 && y > 0){
        printf("Já que o x é negativo e y é positivo eles estão no segundo quadrante\n");
    }
    else if (x < 0 && y < 0){
        printf("Já que ambos são negativos eles estão no terceiro quadrante\n");
    }
    else if (x > 0 && y < 0){
        printf("Já que o x é positivo e y é negativo eles estão no quarto quadrante\n");
    }

    return 0;
}