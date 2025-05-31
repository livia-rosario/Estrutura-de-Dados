#ifndef BD_PACIENTE_H
#define BD_PACIENTE_H

#include "paciente.h"
#define MAX_PACIENTES 500

typedef struct {
    Paciente pacientes[MAX_PACIENTES];
    int quantidade_atual;
} BDPaciente;

// Inicializa a estrutura BDPaciente.
void inicializar_bd(BDPaciente* bd);

// Carrega dados do CSV. Retorna 1 em sucesso, 0 em erro.
int carregar_dados_csv(BDPaciente* bd, const char* nome_arquivo_csv);

// Consulta pacientes por nome (prefixo, case-insensitive).
void consultar_pacientes_por_nome(const BDPaciente* bd, const char* prefixo_nome);

// Consulta pacientes por CPF (prefixo, case-insensitive).
void consultar_pacientes_por_cpf(const BDPaciente* bd, const char* prefixo_cpf);

// Imprime lista de pacientes paginada.
void imprimir_lista_pacientes_paginada(const BDPaciente* bd, int itens_por_pagina);

#endif // BD_PACIENTE_H