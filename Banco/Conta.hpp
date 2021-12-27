#pragma once
#include <string>

class Conta {
private:
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo;

public:
	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNomeTitular();
	std::string recuperaCpfTitular();
	std::string recuperaNumero();
};