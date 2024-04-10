#include <iostream>

//Nota
int main(){
    int nota1, nota2, nota3, total, presenca, recu, situ, final;

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
        printf("Esse aluno está reprovado \n");
    }
    else if (total >= 7){
        printf("Esse aluno está aprovado \n");
    }
    else if (total < 7 && total > 5){
        printf("Esse aluno esta de recuperação  \n");
        printf("Nota:%d", total);
        printf("Esse aluno fez a recuperação 1 para sim e 2 para não:");
        scanf("%d", &situ);
    }
    else
    {
        printf("Esse aluno está reprovado \n");
    }
    
    
    
    //Resultado da recuperação
    if (situ = 1){
        printf("Quanto ele tirou na recuperação:");
        scanf("%d", &recu);
    }
    else if (situ = 2)
    {
        printf("Esse aluno está reprovado");
    }

    //Final
    final = total + recu;

    if(final <= 10){
        printf("O aluno foi aprovado");
    }
    else
    {
        printf("O aluno continua reprovado");
    }
    return 0;
}