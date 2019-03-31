//GRUPO: ANDRÉ HABBIB && LUAN ROCHA

#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include <string>
#include <vector>
#include "funcionario.h"
using String = std::string;


class Empresa {
	private:
		String nome;

		String CNPJ;

		std::vector<Funcionario> listaDeFuncionarios;

	public:
		Empresa(); //Construtor padrão 
		Empresa(std::string nome, std::string CNPJ); //Construtor parametrizado

		static int numeroDeEmpresas;
		static int getNumeroDeEmpresas();
	

		void adicionarFuncionario(String nome, String CPF, float salario, date dataDeAdmissao);

		void listarFuncionarios();

		void aumentoDeSalario(float porcentagem); 

		void listarFuncionariosPerExp(date dataAtual);

		static float mediaDeFuncPorEmpresas();
		
};

#endif
