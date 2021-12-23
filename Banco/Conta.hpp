#pragma once
#include <string>

class Conta {
private:
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo = 0;

public:
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNomeTitular();
	std::string recuperaCpfTitular();
	std::string recuperaNumero();

	void definirNomeTitular(std::string nomeTitular_);
	void definirCpfTitular(std::string cpfTitular_);
	void definirNumero(std::string numero_);
};