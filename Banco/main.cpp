#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "CPF.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta)
{
	conta.sacar(200);
}

int main() {
	//Titular titular("123.456.789-10", "Rodrigo");
	ContaPoupanca umaConta("123456", Titular(CPF("123.456.789-10"), "Rodrigo"));

	umaConta.depositar(500);
	//umaConta.sacar(200);
	RealizaSaque(umaConta);

	ExibeSaldo(umaConta);



	ContaCorrente umaOutraConta("654321", Titular(CPF("123.456.722-11"), "Amaral"));

	umaOutraConta.depositar(300);
	//umaOutraConta.sacar(200);
	RealizaSaque(umaOutraConta);

	ExibeSaldo(umaOutraConta);

	cout << "Numeros de contas: " << Conta::recuperaNumeroDeContas() << endl;

	Funcionario funcionario(CPF("123.456.789-10"), "Rodrigo Amaral", 1000.00);

	cout << "Nome do Funcionario: " << funcionario.recuperaNome() << endl;


	return 0;
}