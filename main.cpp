//GRUPO: ANDRÉ HABBIB && LUAN ROCHA


#include  <iostream>
#include "empresa.h"
#include "funcionario.h"

int Funcionario::numeroDeFuncionarios = 0;
int Empresa::numeroDeEmpresas = 0;

int main(){


	Empresa cientec("CIENTEC", "276143714263"); //criando empresa cientec.

	cientec.adicionarFuncionario("Luan Rocha", "70330610481", 100.00, date(30,06,2018)); // adicionando Luan a empresa cientec.
	cientec.adicionarFuncionario("Elyton Victor", "70335610481", 200.00, date(30,12,2018)); // adicionando Elyton a empresa cientec.
	cientec.adicionarFuncionario("Habib Fonseca", "72430610481", 300.00, date(30,03,2018)); // adicionando Habib a empresa cientec.

	cientec.adicionarFuncionario("Luan Rocha", "70330610481", 400, date(30,12,2018)); // tentando adicionar luan novamente.

	cientec.listarFuncionarios(); // listando funcionarios da empresa cientec.

	cientec.aumentoDeSalario(100); //aumentando 100% do salario dos funcionarios da empresa cientec.

	cientec.listarFuncionarios(); // listando funcionarios da empresa cientec.

	cientec.listarFuncionariosPerExp(date(01,01,2019)); //Listar funcionarios em período de experiência na empresa cientec.

	Empresa teczoo("TECZOO", "276143714263"); //criando empresa teczoo.

	teczoo.adicionarFuncionario("Luan Rocha", "70330610481", 100.00, date(30,06,2018)); // adicionando Luan a empresa teczoo.
	teczoo.adicionarFuncionario("Habib Fonseca", "72430610481", 300.00, date(30,03,2018)); // adicionando Habib a empresa teczoo.


	std::cout << "Média de funcionarios por empresa: " << cientec.mediaDeFuncPorEmpresas() << std::endl; //calculando média de funcionários por empresa.
	
	
	return 0;
}