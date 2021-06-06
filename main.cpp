#include <iostream>
using namespace std;

bool validarOperador (char operador) {
  // SE o operador for igual a + OU operador for igual a -
  // OU o operador for igual a * OU operador for igual a /
  // RETORNE true
  return false;
}

int main() {
  char operador;
  bool operacaoValida;
  float operando1, operando2;

  do {
    cin >> operando1 >> operador >> operando2;
    operacaoValida = validarOperador (operador);
    // SE operacaoValida for igual a true FAÇA
    //   SE operador for igual a + FAÇA calcule a expressão de adição
    //   SE operador for igual a - FAÇA calcule a expressão de subtração
    //   SE operador for igual a * FAÇA calcule a expressão de multiplicação
    //   SE operador for igual a / FAÇA calcule a expressão de divisão
    // FIM SE
  } while (operacaoValida);

  return 0;
}
