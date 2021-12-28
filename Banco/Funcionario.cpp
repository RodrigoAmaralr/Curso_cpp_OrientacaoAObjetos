#include "Funcionario.hpp"
Funcionario::Funcionario(CPF cpf, std::string nome, float salario):
	Pessoa(cpf, nome), 
	salario(salario)
{

}

std::string Funcionario::recuperaNome() {
	return nome;
}