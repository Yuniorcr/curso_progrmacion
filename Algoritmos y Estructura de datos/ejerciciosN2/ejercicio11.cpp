#include <iostream>
int main(int argc, char const *argv[]) {
  float matriz[3][4];
  for (size_t i = 0; i <3; i++) {
    for (size_t j = 0; j < 4; j++) {
      std::cout << "ingrese matriz en : [" <<i<<"]["<<j<<"]: ";
      std::cin >> matriz[i][j];
    }
  }
  std::cout << "matriz original:" << '\n';
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 4; j++) {
      std::cout << matriz[i][j] <<" ";
    }
    std::cout <<"\n";
  }
  std::cout << "matriz dividido:" << '\n';
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 4; j++) {
      std::cout << matriz[i][j]/matriz[2][2]<<" ";
    }
    std::cout <<"\n";
  }
  return 0;
}
