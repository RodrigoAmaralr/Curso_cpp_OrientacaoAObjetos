#pragma once
#include <string>

class CPF
{
private:
	std::string numero;
public:
	explicit CPF(std::string numero);
	std::string recuperaNumero();
};

