#include <iostream>

#pragma once

class Simbolo {
  public:
    Simbolo(std::string& simbolo_entrada);
    
    bool operator==(const Simbolo& simbolo_entrada) const;
    bool operator!=(const Simbolo& simbolo_entrada) const;
    friend std::ostream& operator<<(std::ostream& os, const Simbolo& simbolo_entrada);
  private:
    std::string simbolo_;
};