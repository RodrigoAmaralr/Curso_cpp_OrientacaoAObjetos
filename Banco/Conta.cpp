#pragma once

#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular):
	numero(numero), 
	nomeTitular(nomeTitular), 
	cpfTitular(cpfTitular), 
	saldo(0)
{
	verificaTamanhoDoNome();
	numeroDeContas++;
}

Conta::~Conta() {
	numeroDeContas--;
}

void Conta::sacar(float valorASacar) {
	if (valorASacar < 0) {
		std::cout << "Nao pode sacar valor negativo" << std::endl;
		return;
	}
	if (valorASacar > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorASacar;
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

std::string Conta::recuperaNomeTitular() {
	return nomeTitular;
}

std::string Conta::recuperaCpfTitular() {
	return cpfTitular;
}

std::string Conta::recuperaNumero() {
	return numero;
}

int Conta::recuperaNumeroDeContas() {
	return numeroDeContas;
}

void Conta::verificaTamanhoDoNome() {
	if (nomeTitular.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}
