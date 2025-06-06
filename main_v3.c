// Versão 2 - Adiciona funcionalidades de edição e exclusão de tarefas

#include <stdio.h>
#include <string.h>

#define MAX_TAREFAS 100
#define MAX_CARACTERES 50

char tarefas[MAX_TAREFAS][4][MAX_CARACTERES];
int quantidade = 0;

// NOVO: Função para editar uma tarefa
void editarTarefa(int indice) {
    printf("\nEditando Tarefa %d\n", indice + 1);

    printf("Novo título: ");
    fgets(tarefas[indice][0], MAX_CARACTERES, stdin);
    strtok(tarefas[indice][0], "\n");

    printf("Nova descrição: ");
    fgets(tarefas[indice][1], MAX_CARACTERES, stdin);
    strtok(tarefas[indice][1], "\n");

    printf("Nova prioridade: ");
    fgets(tarefas[indice][2], MAX_CARACTERES, stdin);
    strtok(tarefas[indice][2], "\n");

    printf("Novo status: ");
    fgets(tarefas[indice][3], MAX_CARACTERES, stdin);
    strtok(tarefas[indice][3], "\n");

    printf("Tarefa atualizada com sucesso.\n");
}

// NOVO: Função para excluir uma tarefa
void excluirTarefa(int indice) {
    for (int i = indice; i < quantidade - 1; i++) {
        for (int j = 0; j < 4; j++) {
            strcpy(tarefas[i][j], tarefas[i + 1][j]);
        }
    }
    quantidade--;
    printf("Tarefa excluída com sucesso.\n");
}

void cadastrarTarefa() {
    if (quantidade >= MAX_TAREFAS) {
        printf("Limite de tarefas atingido.\n");
        return;
    }

    printf("Digite o título da tarefa: ");
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
    printf("Tarefa cadastrada com sucesso!\n");
}

void listarTarefas() {
    if (quantidade == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
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
    int opcao, indice;

    do {
        printf("\n=== Sistema de Gerenciamento de Tarefas ===\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Editar Tarefa\n");    // NOVO
        printf("4. Excluir Tarefa\n");   // NOVO
        printf("5. Sair\n");
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
                printf("Digite o número da tarefa a editar: ");
                scanf("%d", &indice);
                getchar();
                if (indice > 0 && indice <= quantidade) {
                    editarTarefa(indice - 1);
                } else {
                    printf("Índice inválido.\n");
                }
                break;
            case 4:
                printf("Digite o número da tarefa a excluir: ");
                scanf("%d", &indice);
                getchar();
                if (indice > 0 && indice <= quantidade) {
                    excluirTarefa(indice - 1);
                } else {
                    printf("Índice inválido.\n");
                }
                break;
            case 5:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
}


// NOVO: Função para salvar as tarefas em arquivo .txt
void salvarTarefasEmArquivo() {
    FILE *arquivo = fopen("tarefas.txt", "w");
    for (int i = 0; i < quantidade; i++) {
        fprintf(arquivo, "Tarefa %d: %s - Prioridade: %s - Status: %s\n",
                i + 1, tarefas[i][0], tarefas[i][2], tarefas[i][3]);
        fprintf(arquivo, "Descrição: %s\n", tarefas[i][1]);
    }
    fclose(arquivo);
}