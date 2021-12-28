#include "CPF.hpp"

CPF::CPF(std::string numero):numero(numero) {

}

std::string CPF::recuperaNumero() {
	return numero;
}