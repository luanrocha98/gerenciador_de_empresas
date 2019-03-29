#include "funcionario.h"


Funcionario::Funcionario(): ////Construtor padrão
	nome("Robertao"),
	CPF("66666666666"),
	salario(0),
	dataDeAdmissao(1,1,2019)
{}

Funcionario::Funcionario(std::string nome, std::string CPF, float salario, date dataDeAdmissao){ //// Construtor parametrizado.
	this->nome = nome;
	this->CPF = CPF;
	this->salario = salario;
	this->dataDeAdmissao = dataDeAdmissao;
}


//métodos Gets e Sets necessários:
int Funcionario::getNumeroDeFuncionarios() {
return numeroDeFuncionarios;
}
std::string Funcionario::getCPF() {
	return CPF;
}
float Funcionario::getSalario() {
	return salario;
}
void Funcionario::setSalario(float salario){
	this->salario = salario;
}

 //variável que retorna 1 se o funcionário está em período de esperiência, ou 0 se não está:
bool Funcionario::periodoDeExperiencia(date dataAtual) {
	date d = dataAtual;

	for(int i=0; i<90 ; ++i) { //pego a data a 90 dias atrás.
		d--;
	}
	
	return (d<dataDeAdmissao); // e vejo se o funcionário entrou depois disso.
}

// sobrecarga do operador << para funcionários.
std::ostream& operator<< (std::ostream &o, Funcionario const f) {
	o << "Nome: " << f.nome << "\n" 
	<< "CPF: " << f.CPF  << "\n" 
	<< "Salário: " << f.salario << "\n"
	<< "Data de admissão: " << f.dataDeAdmissao << "\n";
	
	return o;
}

