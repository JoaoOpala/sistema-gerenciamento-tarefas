
// Versão 1: Cadastro e listagem de tarefas
#include <stdio.h>
#include <string.h>

#define MAX_TAREFAS 100
#define MAX_CARACTERES 50

char tarefas[MAX_TAREFAS][4][MAX_CARACTERES];
int quantidade = 0;

void cadastrarTarefa() {
    if (quantidade >= MAX_TAREFAS) {
        printf("\nLimite de tarefas atingido.\n");
        return;
    }
    printf("\nDigite o título da tarefa: ");
    fgets(tarefas[quantidade][0], MAX_CARACTERES, stdin);
    strtok(tarefas[quantidade][0], "\n");

    printf("Digite a descrição: ");
    fgets(tarefas[quantidade][1], MAX_CARACTERES, stdin);
    strtok(tarefas[quantidade][1], "\n");

    printf("Digite a prioridade (Alta, Média, Baixa): ");
    fgets(tarefas[quantidade][2], MAX_CARACTERES, stdin);
    strtok(tarefas[quantidade][2], "\n");

    printf("Digite o status (Pendente, Concluído): ");
    fgets(tarefas[quantidade][3], MAX_CARACTERES, stdin);
    strtok(tarefas[quantidade][3], "\n");

    quantidade++;
    printf("\nTarefa cadastrada com sucesso!\n");
}

void listarTarefas() {
    if (quantidade == 0) {
        printf("\nNenhuma tarefa cadastrada.\n");
        return;
    }
    printf("\n=== Lista de Tarefas ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Tarefa %d: %s - Prioridade: %s - Status: %s\n", i + 1,
               tarefas[i][0], tarefas[i][2], tarefas[i][3]);
        printf("Descrição: %s\n", tarefas[i][1]);
    }
}

int main() {
    int opcao;
    do {
        printf("\n=== Sistema de Gerenciamento de Tarefas ===\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrarTarefa();
                break;
            case 2:
                listarTarefas();
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 3);
    return 0;
}
