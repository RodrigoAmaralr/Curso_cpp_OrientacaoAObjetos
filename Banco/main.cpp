#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main() {
	Conta umaConta;
	Conta umaOutraConta;

	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);

	cout << "Uma conta: " << umaConta.recuperaSaldo() << " Uma Outra conta: " << umaOutraConta.recuperaSaldo() << endl;


	return 0;
}