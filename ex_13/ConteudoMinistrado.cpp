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

const std::string& ConteudoMinistrado::getDescricao() const { return this->descricao; }

unsigned short ConteudoMinistrado::getCargaHorariaConteudo() const {
  return cargaHorariaConteudo;
}

unsigned int ConteudoMinistrado::getId() const { return id; }