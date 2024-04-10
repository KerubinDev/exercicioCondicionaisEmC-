#include <iostream>
int main(){
    int nota1, nota2, nota3, total, presenca;

    printf("Nota 1: ");
    scanf("%d", &nota1);
    printf("Nota 2: ");
    scanf("%d", &nota2);
    printf("Nota 3: ");
    scanf("%d", &nota3);
    printf("Presença: ");
    scanf("%d", &presenca);

    total = ((nota1 + nota2 + nota3)/3);

    if (presenca < 75){
        printf("Você foi reprovado... triste ;-; \n");
        printf("Nota:%d \n", total);
        printf("Presença:%d \n", presenca);
    }
    else if (total >= 7){
        printf("Parabéns você foi aprovado :D \n");
        printf("Nota:%d \n", total);
        printf("Presença:%d \n", presenca);
    }
    else if (total < 7 && total > 5){
        printf("Você esta em recuperação, cuidado :/  \n");
        printf("Nota:%d \n", total);
        printf("Presença:%d \n", presenca);
    }
    else
    {
        printf("Você foi reprovado... triste ;-; \n");
        printf("Nota:%d \n", total);
        printf("Presença:%d \n", presenca);
    }
    return 0;
}