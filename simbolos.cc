#include "simbolos.h"

// Constructor
Simbolo::Simbolo(std::string& simbolo_entrada) {
  simbolo_ = simbolo_entrada;
}

// Sobre carga del operador ==
bool Simbolo::operator==(const Simbolo& simbolo_entrada) const {
  return simbolo_ == simbolo_entrada.simbolo_;
}

// Sobrecarga del operador !=
bool Simbolo::operator!=(const Simbolo& simbolo_entrada) const {
  return simbolo_ != simbolo_entrada.simbolo_;
}

// Sobre carga operador de salida para imprimir el simbolo
std::ostream& operator<<(std::ostream& os, const Simbolo& simbolo_entrada) {
  os << simbolo_entrada.simbolo_;
  return os;
}