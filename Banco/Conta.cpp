#pragma once

#include "Conta.hpp"
#include <iostream>

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

void Conta::definirNomeTitular(std::string nomeTitular_) {
	nomeTitular = nomeTitular_;
}

void Conta::definirCpfTitular(std::string cpfTitular_) {
	cpfTitular = cpfTitular_;
}

void Conta::definirNumero(std::string numero_) {
	numero = numero_;
}
