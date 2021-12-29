#pragma once

#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular):
	numero(numero), 
	titular(titular),
	saldo(0)
{
	numeroDeContas++;
}

Conta::~Conta() {
	std::cout << "Destrutor da conta" << std::endl;
	numeroDeContas--;
}

void Conta::sacar(float valorASacar) {

	if (valorASacar < 0) {
		std::cout << "Nao pode sacar valor negativo" << std::endl;
		return;
	}
	float tarifaDeSaque = valorASacar * taxaDeSaque();
	float valorDoSaque = valorASacar + tarifaDeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorDoSaque;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar < 0) {
		std::cout << "Nao pode depositar valor negativo" << std::endl;
		return;
	}
	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const{
	return saldo;
}

//std::string Conta::recuperaNomeTitular() {
//	return titular.recuperaNomeTitular();
//}
//
//std::string Conta::recuperaCpfTitular() {
//	return titular.recuperaCpfTitular();;
//}

std::string Conta::recuperaNumero() {
	return numero;
}

int Conta::recuperaNumeroDeContas() {
	return numeroDeContas;
}

