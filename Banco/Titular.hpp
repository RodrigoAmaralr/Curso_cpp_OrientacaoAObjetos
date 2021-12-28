#pragma once
#include <string>
#include "Pessoa.hpp"
#include "CPF.hpp"

class Titular : public Pessoa
{
private:

public:
	Titular(CPF cpf, std::string nome);

private:
};

