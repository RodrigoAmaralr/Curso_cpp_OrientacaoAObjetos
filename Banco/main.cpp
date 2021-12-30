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

void FazLogin(Autenticavel& alguem, string senha)
{
	if (alguem.autentica(senha)) {
		cout << "Login realizado com sucesso" << endl;
	}
	else {
		cout << "SEnha invalida" << endl;
	}
}

int main() {
	Titular titular(CPF("123.456.789-10"), "Rodrigo", "umaSenha");
	ContaPoupanca umaConta("123456", titular);
	umaConta.depositar(500);
	RealizaSaque(umaConta);

	ExibeSaldo(umaConta);


	Titular titular2(CPF("123.456.722-11"), "Amaral", "outraSenha");
	ContaCorrente umaOutraConta("654321", titular2);

	umaOutraConta.depositar(300);

	ContaCorrente outraContaCorrente("546312", titular);

	umaOutraConta.tranferePara(outraContaCorrente, 250);

	ExibeSaldo(umaOutraConta);
	ExibeSaldo(outraContaCorrente);

	cout << "Numeros de contas: " << Conta::recuperaNumeroDeContas() << endl;



	return 0;
}