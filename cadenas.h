#include <iostream>
#include <vector>

#include "simbolos.h"
#include "alfabetos.h"

#pragma once

class Cadena {
  public:
    Cadena();
    Cadena(Alfabeto& Alfabeto, std::vector<Simbolo>& cadena);

    void SetAlfabeto(Alfabeto& alfabeto_entrada);
    void InsertarSimbolo(Simbolo& simbolo_entrada);

    int Longitud();
    Cadena Inversa();
    std::vector<Cadena> Prefijos();
    std::vector<Cadena> Sufijos();
    std::vector<Cadena> Subcadenas();

    std::vector<Simbolo> GetCadena();
    bool CompruebaRepetidos(std::vector<Simbolo>& subcadena, std::vector<Cadena>& subcadenas);

    friend std::ostream& operator<<(std::ostream& os, Cadena& cadena);
    bool operator==(Cadena& cadena);
  private:
    std::vector<Simbolo> cadena_;
    Alfabeto alfabeto_;
};
