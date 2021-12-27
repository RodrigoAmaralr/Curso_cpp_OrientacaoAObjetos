#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	Conta umaOutraContaDesnecessaria("654321", "Amaral", "123.456.222-11");
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

int main() {
	Conta umaConta("123456", "Rodrigo", "123.456.789-10");

	umaConta.depositar(500);
	umaConta.sacar(200);

	ExibeSaldo(umaConta);


	Conta umaOutraConta("654321", "Ama", "123.456.222-11");

	umaOutraConta.depositar(300);
	umaOutraConta.sacar(50);

	ExibeSaldo(umaOutraConta);

	cout << "Numeros de contas: " << Conta::recuperaNumeroDeContas() << endl;


	return 0;
}