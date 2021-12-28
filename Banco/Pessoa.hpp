#pragma once
#include "CPF.hpp"
#include <string>

class Pessoa
{
protected:
	CPF cpf;
	std::string nome;

public:
	Pessoa(CPF cpf, std::string nome);
private:
	void verificaTamanhoDoNome();
};

