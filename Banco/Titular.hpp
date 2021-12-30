#pragma once
#include <string>
#include "Pessoa.hpp"
#include "CPF.hpp"
#include "Autenticavel.hpp"

class Titular : public Pessoa, public Autenticavel
{
private:

public:
	Titular(CPF cpf, std::string nome, std::string senha);

private:
};

