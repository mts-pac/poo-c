#ifndef FILA_CIRCULAR_H
#define FILA_CIRCULAR_H

template <typename T, int MAX_FILA>
class FilaCircular {
 public:
  FilaCircular() : frente(0), fundo(0), quantidade(0) {}

  bool estaVazia() const { return quantidade == 0; }

  bool estaCheia() const { return quantidade == MAX_FILA; }

  bool push(const T& valor) {
    if (estaCheia()) {
      return false;  // Fila está cheia, não é possível enfileirar mais
                     // elementos
    }

    fila[fundo] = valor;
    fundo =
        (fundo + 1) %
        MAX_FILA;  // Movimento circular (se chegar no fundo escreve na frente')
    quantidade++;
    return true;
  }

  bool pop(T& retorno) {
    if (estaVazia()) {
      return false;  // Fila está vazia, não é possível desenfileirar
    }

    retorno = fila[frente];
    frente = (frente + 1) % MAX_FILA;  // Movimento circular
    quantidade--;
    return true;
  }

  int getFrente() { return this->frente; }
  int getFundo() { return this->fundo; }

 private:
  T fila[MAX_FILA];
  int frente;
  int fundo;
  int quantidade;
};

#endif