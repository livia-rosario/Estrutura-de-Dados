#ifndef PACIENTE_H
#define PACIENTE_H

/* Define o tamanho máximo para os campos de texto */
#define MAX_NOME 100
#define MAX_CPF 15
#define MAX_DATA 11 // Você usou MAX_DATA, o que está ok!

/* Estrutura para armazenar os dados de um paciente */
typedef struct {
  int id;
  char cpf[MAX_CPF];
  char nome[MAX_NOME];
  int idade;
  char data_cadastro[MAX_DATA]; // Usando MAX_DATA aqui
} Paciente;

void imprimir_paciente(const Paciente *p);

#endif // PACIENTE_H