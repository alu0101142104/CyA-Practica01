#include <iostream>
#include <vector>

#include "simbolos.h"

#pragma once

class Alfabeto {
  public:
    Alfabeto();

    void InsertarSimbolo(Simbolo& simbolo_entrada);
    bool BuscarSimbolo(Simbolo& simbolo_entrada);

    friend std::ostream& operator<<(std::ostream& os, const Alfabeto& alfabeto_entrada);

  private:
    std::vector<Simbolo> alfabeto_;
};