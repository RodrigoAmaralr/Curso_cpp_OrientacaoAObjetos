#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "CPF.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

int main() {
	//Titular titular("123.456.789-10", "Rodrigo");
	Conta umaConta("123456", Titular(CPF("123.456.789-10"), "Rodrigo"));

	umaConta.depositar(500);
	umaConta.sacar(200);

	ExibeSaldo(umaConta);
	cout << "Nome: " << umaConta.recuperaNomeTitular() << endl;
	cout << "CPF: " << umaConta.recuperaCpfTitular() << endl;


	Conta umaOutraConta("654321", Titular(CPF("123.456.722-11"), "Amaral"));

	umaOutraConta.depositar(300);
	umaOutraConta.sacar(50);

	ExibeSaldo(umaOutraConta);
	cout << "Nome: " << umaOutraConta.recuperaNomeTitular() << endl;
	cout << "CPF: " << umaOutraConta.recuperaCpfTitular() << endl;

	cout << "Numeros de contas: " << Conta::recuperaNumeroDeContas() << endl;


	return 0;
}