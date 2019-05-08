#include <iostream>
int main(int argc, char const *argv[]) {
  int numeros[100][100],filas,columnas;

  std::cout << "digite filas" << '\n';
  std::cin >> filas;
  std::cout << "digite columnas" << '\n';
  std::cin >> columnas;

  for (size_t  i = 0; i < filas; i++) {
    for ( size_t j = 0; j < columnas; j++) {
      std::cout << "digite numeros["<<i<<"]["<<j<<"]" << '\n';
      std::cin >> numeros[i][j];
    }
  }

  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < columnas; j++) {
      std::cout << numeros[i][j] <<" ";
    }
    std::cout << "\n";
  }
  return 0;
}
