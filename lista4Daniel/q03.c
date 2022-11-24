#include <stdio.h>
#include <locale.h>

struct aluno{
        char nome[23];
        char disciplina[23];
        float nota1, nota2;
};

int main() {
    setlocale(0, "Portuguese");
    struct aluno aluno1;
    
    printf("Digite o nome do aluno, disciplina, primeira nota e segunda nota:\n");
    scanf("%s %s %f %f", &aluno1.nome, &aluno1.disciplina, &aluno1.nota1, &aluno1.nota2);

    printf("Os dados informado são: %s, %s, %.2f %.2f", aluno1.nome, aluno1.disciplina, aluno1.nota1, aluno1.nota2);
    
    return 0;
}

