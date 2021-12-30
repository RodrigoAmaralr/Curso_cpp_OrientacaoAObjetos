#include "Autenticavel.hpp"

Autenticavel::Autenticavel(std::string):senha(senha) {

}

bool Autenticavel::autentica(std::string senha) const
{
	return senha == this->senha;
}
