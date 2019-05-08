#include <iostream>
int main(int argc, char const *argv[]) {

  int x;
  std::cout << "ingrese numero de matriz" << '\n';
  std::cin >> x;
  int matriz1[x][x];
  for (int i = 0; i <x; i++) {
    for ( int j = 0; j < x; j++) {
      std::cout << "ingrese matriz en : [" <<i<<"]["<<j<<"]: ";
      std::cin >>matriz1[i][j];
    }
  }
  std::cout << "matriz transpuesta"<<'\n';
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      std::cout <<matriz1[j][i]<<"\t";
    }
    std::cout << "\n";
  }
  return 0;
}
