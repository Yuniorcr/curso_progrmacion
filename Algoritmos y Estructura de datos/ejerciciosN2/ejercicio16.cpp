#include <iostream>
int main(int argc, char const *argv[]) {

  char  cadena[9]="sistemas";
  //incriptando cadena suma mas dos a cada caracter
  for (size_t i = 0; i < 8; i++) {
    cadena[i]=cadena[i]+2;
  }
  //imprimir la cadena imcriptado
  for (size_t i = 0; i < 8; i++) {
    std::cout << cadena[i];
  }
  //desencriptando
  for (size_t i = 0; i < 8; i++) {
    cadena[i]=cadena[i]-2;
  }
  std::cout << "\n";
  for (size_t i = 0; i < 8; i++) {
    std::cout <<cadena[i];
  }
  return 0;
}
