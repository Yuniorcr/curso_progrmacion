#include <iostream>
int main(int argc, char const *argv[]) {

  int a[100][100], b[100][100], c[100][100];
  int k,m,n;

  std::cout << "matriz A.\n";
  std::cout << "filas de A: ";
  std::cin >> k;
  std::cout << "columnas de A.\n";
  std::cin >>m;

  for (size_t i = 0; i < k; i++) {
    for (size_t j = 0; j < m; j++) {
      std::cout << "ingrese matriz en : [" <<i<<"]["<<j<<"]: ";
      std::cin >> a[i][j];
    }
  }
  std::cout << "matriz B\n";
  std::cout << "columnas de B:";
  std::cin >>n;
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cout << "ingrese matriz en : [" <<i<<"]["<<j<<"]: ";
        std::cin >> b[i][j];
    }
  }
  for (size_t i = 0; i < k; i++) {
    for (size_t j = 0; j < m; j++) {
      c[i][j]=0;
    }
  }
  for (size_t i = 0; i < k; i++) {
    for (size_t j = 0; j < n; j++) {
      for (size_t z = 0; z < m; z++) {
        c[i][j]+= a[i][z]*b[z][j];
      }
    }
  }
  for (size_t i = 0; i < k; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cout << c[i][j]<<"\t";
    }
    std::cout << "\n";
  }
  return 0;
}
