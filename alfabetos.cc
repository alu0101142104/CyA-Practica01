#include "alfabetos.h"

// Constructor por defecto
Alfabeto::Alfabeto() {
  alfabeto_.clear();
}

// Inserta un simbolo en el alfabeto
void Alfabeto::InsertarSimbolo(Simbolo& simbolo_entrada) {
  alfabeto_.push_back(simbolo_entrada);
}

// Comprueba si el simbolo está en el alfabeto
bool Alfabeto::BuscarSimbolo(Simbolo& simbolo_entrada) {
  for (unsigned int index = 0; index < alfabeto_.size(); index++) {
    if (alfabeto_[index] == simbolo_entrada) {
      return true;
    }
  }
  return false;
}

// Sobre carga del operador de salida << para imprimir el alfabeto
std::ostream& operator<<(std::ostream& os, const Alfabeto& alfabeto_entrada) {
  for (unsigned int index = 0; index < alfabeto_entrada.alfabeto_.size(); index++) {
    os << alfabeto_entrada.alfabeto_[index] << " ";
  }
  return os;
}
