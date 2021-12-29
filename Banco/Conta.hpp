#pragma once
#include <string>
#include "Titular.hpp"

class Conta {
private:
	static int numeroDeContas;
public:
	static int recuperaNumeroDeContas();
private:
	std::string numero;
	Titular titular;

protected:
	float saldo;

public:
	Conta(std::string numero, Titular titular); // contrutor
	virtual ~Conta(); //Destrutor
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	//std::string recuperaNomeTitular();
	//std::string recuperaCpfTitular();
	std::string recuperaNumero();
	virtual float taxaDeSaque() const = 0;  // Metodo puramente virtual. =0 indica que não foi implementado e que as classes que herdarem devem implementar (Classe abstrata)
};