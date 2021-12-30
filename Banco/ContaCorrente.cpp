#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular) {

}

float ContaCorrente::taxaDeSaque() const
{
	std::cout << "Chamando m�todo sacar da conta corrente" << std::endl;
	return 0.05;
}

void ContaCorrente::tranferePara(Conta& destino, float valor) {
	sacar(valor);
	destino.depositar(valor);
}
