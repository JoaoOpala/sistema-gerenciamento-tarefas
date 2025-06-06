# Sistema de Gerenciamento de Tarefas

Este é um programa feito em linguagem C que funciona como uma **lista de tarefas simples**, parecida com um bloco de anotações.  

---

## ✅ O que você pode fazer com ele?

- Adicionar novas tarefas
- Ver a lista de tarefas já cadastradas
- Editar uma tarefa (mudar os dados)
- Excluir uma tarefa que não precisa mais
- Salvar todas as tarefas em um arquivo de texto chamado `tarefas.txt`

---

## 🧠 O que é uma tarefa?

Cada tarefa tem 4 partes:

1. **Título** – Exemplo: Estudar para a prova  
2. **Descrição** – Detalhes do que fazer  
3. **Prioridade** – Pode ser: Alta, Média ou Baixa  
4. **Status** – Diz se já foi feita: Pendente ou Concluído

---

## 🛠️ Como usar o programa

### 1. Instale um compilador C

Se você estiver no Windows, instale o **MinGW**.  
Se estiver no Linux, use o comando:

```bash
sudo apt install gcc
```

Ou use este site para testar direto no navegador:  
👉 https://www.onlinegdb.com/online_c_compiler

---

### 2. Escolha um dos arquivos do projeto

Você encontrará:

- `main_v1.c` – Só cadastra e mostra tarefas
- `main_v2.c` – Também permite editar e excluir tarefas
- `main_v3.c` – A versão mais completa, também salva tudo no arquivo `tarefas.txt`

---

### 3. Compile o programa

Abra o terminal ou o site e digite:

```bash
gcc main_v3.c -o tarefas
```

Isso vai criar um arquivo executável chamado `tarefas`.

---

### 4. Rode o programa

No Linux ou no site, use:

```bash
./tarefas
```

No Windows:

```bash
tarefas.exe
```

---

## 🧪 O que aparece na tela

Você verá esse menu:

```
=== Sistema de Gerenciamento de Tarefas ===
1. Cadastrar Tarefa
2. Listar Tarefas
3. Editar Tarefa
4. Excluir Tarefa
5. Salvar Tarefas em Arquivo
6. Sair
Escolha uma opção:
```

Digite o número e siga o que for pedido.

---

## 📄 Exemplo do arquivo `tarefas.txt`

Se você escolher salvar, será criado um arquivo chamado `tarefas.txt` com o conteúdo assim:

```
Tarefa 1: Estudar para prova - Prioridade: Alta - Status: Pendente
Descrição: Ler o capítulo 5 do livro

Tarefa 2: Fazer trabalho - Prioridade: Média - Status: Concluído
Descrição: Entregar até sexta
```

---

## 📂 O que tem dentro do projeto?

- `main_v1.c` – Primeira versão
- `main_v2.c` – Com edição e exclusão
- `main_v3.c` – Completa com salvamento
- `tarefas.txt` – Exemplo de tarefas salvas
- `LICENSE` – Licença MIT (uso livre)
- `README.md` – Este manual

---


## 🧾 Licença

Este projeto é livre para uso e modificação. Licença MIT.
