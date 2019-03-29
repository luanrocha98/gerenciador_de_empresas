#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "date.h"
#include <iostream>
#include <string.h>

class Funcionario {
	private:
		std::string nome;

		std::string CPF;
		
		float salario;

		date dataDeAdmissao;


	public:

		Funcionario(); //Construtor padrão
		Funcionario(std::string nome, std::string CPF, float salario, date dataDeAdmissao); // Construtor parametrizado.

		
		//métodos Gets e Sets necessários:

		static int numeroDeFuncionarios;
		static int getNumeroDeFuncionarios();

		std::string getCPF(); 
		float getSalario();
		void setSalario(float salario);

		bool periodoDeExperiencia(date dataAtual); //variável que retorna 1 se o funcionário está em período de esperiência, ou 0 se não está.

		friend std::ostream& operator<< (std::ostream &o, Funcionario const f); // sobrecarga do operador << para funcionários.

		
};



#endif