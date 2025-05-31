# 🏥 HealthSys - Sistema de Gerenciamento de Dados de Pacientes (Parte I)

Este projeto consiste na **implementação da primeira parte de um sistema para gerenciamento de pacientes**, desenvolvido em linguagem C. O foco desta etapa está na **consulta e listagem de registros de pacientes**, com os dados armazenados em um **arquivo CSV** e carregados para um **vetor estático em memória**.

---

## 📚 Projeto da Disciplina

> **Disciplina:** Estrutura de Dados  
> **Período:** 3º Período – Bacharelado em Sistemas de Informação  
> **Instituição:** IFES – Campus Serra  
> **Professor:** Thiago Meireles Paixão  
> **Alunas:** Lívia Rosario e Jullyana Breciani

---

## 🚀 Começando

Essas instruções permitirão que você obtenha uma cópia do projeto em operação na sua máquina local para fins de **desenvolvimento, teste e execução**.

> Consulte a seção [📦 Implantação](#-implantação) para detalhes sobre o uso em um ambiente ativo.

---

## 📋 Pré-requisitos

Antes de compilar e executar o projeto, verifique se você possui os seguintes itens instalados:

- **Sistema Operacional:** Linux (desenvolvido e testado no Ubuntu 22.04)
- **Compilador C:** GCC versão 11 ou superior
- **Utilitário Make:** Para compilação automatizada

---

## 🔧 Instalação

1. Clone o repositório:

```bash
git clone https://github.com/livia-rosario/healthsys.git
cd healthsys
```

2. Compile o projeto usando `make`:

```bash
make
```

Isso irá gerar o executável do programa (ex: `programa`).

3. Certifique-se de que o arquivo `bd_paciente.csv` esteja no mesmo diretório do executável.

---

## ▶️ Execução

Execute o programa no terminal com o comando:

```bash
./programa
```

### 💡 Observação:
- O sistema carregará automaticamente os dados do arquivo `bd_paciente.csv`.
- Utilize o menu principal para acessar as funcionalidades disponíveis.

---

## 🧪 Executando os testes

Este projeto ainda **não possui testes automatizados** implementados nesta fase. Os testes são realizados manualmente por meio da execução das funcionalidades no terminal.

---

## 🔍 Análise dos testes manuais

Os testes manuais verificam:

- Consulta por **nome ou CPF** com prefixos, de forma **case-insensitive**
- Listagem de todos os pacientes com **paginação (10 por página)**
- **Comportamento correto do menu** e **validação de entradas inválidas**

---

## 🎨 Padrões de estilo de código

- Nomes de funções e variáveis seguem o padrão **snake_case**
- Comentários explicativos estão presentes em **português**, seguindo as orientações do professor
- Organização modular com separação entre cabeçalhos (.h) e implementações (.c)

---

## 📦 Implantação

Para uso em produção (versões futuras):

- Implementar persistência de alterações no CSV
- Adicionar funcionalidades de inserção, edição e remoção
- Adaptar o projeto para uso com arquivos binários ou banco de dados

---

## 🗂️ Estrutura do Repositório

```bash
├── Makefile                  # Script de compilação
├── main.c                   # Ponto de entrada do sistema
├── paciente.h/.c            # TAD Paciente (dados individuais)
├── bd_paciente.h/.c         # TAD BDPaciente (banco de dados em memória)
├── interface.h/.c           # Interação com o usuário via console
├── bd_paciente.csv          # Base de dados com pacientes (CSV)
├── README.md                # Documentação do projeto
```

---

## 🧱 Principais TADs Utilizados

### 🔹 `Paciente` (paciente.h)

```c
typedef struct {
    int id;
    char cpf[MAX_CPF];
    char nome[MAX_NOME];
    int idade;
    char data_cadastro[MAX_DATA];
} Paciente;
```

Responsável por armazenar os dados de um paciente individual.

---

### 🔹 `BDPaciente` (bd_paciente.h)

```c
typedef struct {
    Paciente pacientes[MAX_PACIENTES];
    int quantidade;
} BDPaciente;
```

Responsável por armazenar e manipular o banco de pacientes em memória.

---

## 🧠 Decisões de Implementação e Conceitos Aplicados

- **Vetor Estático** (`Paciente pacientes[MAX_PACIENTES]`): escolhido para simplificar o gerenciamento de memória nesta etapa inicial.
- **Modularização com TADs:** separação em módulos para garantir organização e reutilização de código.
- **CSV como Banco de Dados Temporário:** os dados são lidos uma única vez e mantidos em memória.
- **Busca por Prefixo Case-Insensitive:** implementada usando `strncmp` e conversão com `tolower`.
- **Listagem com Paginação:** apresentação dos dados em blocos de 10 registros, com controle pelo usuário.
- **Makefile:** automatização da compilação.
- **Validações e Tratamento de Erros:** verificação de arquivo, entrada inválida, entre outros.

---

## 📌 Limitações Conhecidas

- Não há suporte para **cadastro, edição ou remoção** de pacientes.
- A estrutura em vetor estático **limita o número de registros a 500**.
- Alterações feitas no sistema **não são salvas no CSV**.
- Falta de **tratamento robusto** para erros no formato do CSV.

---

## 📈 Futuras Expansões

- Implementação completa do CRUD
- Uso de **arquivos binários ou SQLite**
- Inclusão de testes automatizados
- Interface gráfica 

---

## 🛠️ Construído com

- **C (GCC)** – Linguagem base  
- **Make** – Compilação automatizada  
- **Linux Ubuntu 22.04** – Ambiente de desenvolvimento
