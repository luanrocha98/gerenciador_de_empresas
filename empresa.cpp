//GRUPO: ANDRÉ HABBIB && LUAN ROCHA

#include "empresa.h"


Empresa::Empresa () : //Construtor padrão 
	nome(""),
	CNPJ("")

{}

Empresa::Empresa (std::string nome, std::string CNPJ){ //Construtor parametrizado
	this->nome = nome;
	this->CNPJ = CNPJ;
	std::cout << "Empresa " << nome << " criada com sucesso!" << std::endl;
	numeroDeEmpresas++; //atualizo número de empresas.
}


int Empresa::getNumeroDeEmpresas() {
return numeroDeEmpresas;
}

void Empresa::adicionarFuncionario(String nome, String CPF, float salario, date dataDeAdmissao) {

	for(auto& trabalhador : listaDeFuncionarios){ //percorro o vetor de funcionários.
		if( CPF == trabalhador.getCPF()){ //vejo se tem algum funcionário com CPF igual, se sim, cancelo.
			std::cout << "O funcionario " << nome << " já participa dessa empresa!" << std::endl;
			return;
		}		
	}

	listaDeFuncionarios.emplace_back(Funcionario(nome,CPF,salario,dataDeAdmissao)); // se não tiver ninguem repetido, adiciono o funcionário ao vetor.
	std::cout << "O funcionario " << nome << " foi adicionado com sucesso!" << std::endl;

	Funcionario::numeroDeFuncionarios++; //atualizo número de funcionários.
}


void Empresa::listarFuncionarios() {
	std::cout << "Lista de funcionários: " << std::endl;
	for(auto& trabalhador : listaDeFuncionarios) // já que o operador << já está sobrecarregado para funcionários, só utilizar.
		std::cout << trabalhador << std::endl;
}

void Empresa::aumentoDeSalario(float porcentagem) {
	
	for(auto& trabalhador : listaDeFuncionarios) //percorro o vetor de funcionários.
		//multiplico a porcentagem pelo meu antigo salário e acrescento.
		trabalhador.setSalario( trabalhador.getSalario() + (porcentagem/100)*trabalhador.getSalario() ); 

	std::cout << "Aumento de salário de " << porcentagem <<" porcento para os funcionários!" << std::endl;
}

void Empresa::listarFuncionariosPerExp(date dataAtual) {
	std::cout << "Funcionários em período de experiência: " << std::endl;

	for(auto& trabalhador : listaDeFuncionarios){ //percorro o vetor de funcionários.
		if(trabalhador.periodoDeExperiencia(dataAtual)) // se ele estiver em período de experiência, será mostrado.
		std::cout << trabalhador << std::endl;
	} 

}
float Empresa::mediaDeFuncPorEmpresas() {
	return Funcionario::getNumeroDeFuncionarios()/getNumeroDeEmpresas() ; //calculo a média de funcionários por empresas utilizando os atributos estáticos!
}

