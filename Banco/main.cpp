#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main() {
	Conta umaConta("123456", "Rodrigo", "123.456.789-10");

	umaConta.depositar(500);
	umaConta.sacar(200);

	cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;


	return 0;
}