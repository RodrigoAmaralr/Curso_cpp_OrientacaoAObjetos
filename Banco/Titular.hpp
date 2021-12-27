#pragma once
#include <string>
#include "CPF.hpp"

class Titular
{
private:
	CPF cpf;
	std::string nome;
public:
	Titular(CPF cpf, std::string nome);
	std::string recuperaNomeTitular();
	std::string recuperaCpfTitular();

private:
	void verificaTamanhoDoNome();
};

