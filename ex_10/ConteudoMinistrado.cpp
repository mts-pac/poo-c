#include "ConteudoMinistrado.hpp"

#include <iostream>

ConteudoMinistrado::~ConteudoMinistrado() {
  std::cerr << "[INFO] Destruindo conteudo " << this->descricao << '\n';
}

unsigned int ConteudoMinistrado::proxId{0};

ConteudoMinistrado::ConteudoMinistrado(std::string descricao,
                                       unsigned short cargaHorariaConteudo)
    : descricao(descricao),
      cargaHorariaConteudo(cargaHorariaConteudo),
      id{ConteudoMinistrado::proxId} {
  ConteudoMinistrado::proxId++;
}

std::string& ConteudoMinistrado::getDescricao() { return descricao; }

unsigned short ConteudoMinistrado::getCargaHorariaConteudo() {
  return cargaHorariaConteudo;
}

unsigned int ConteudoMinistrado::getId() { return id; }