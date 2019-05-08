#include <iostream>
int main(int argc, char const *argv[]) {
  int l,m,n;
  float a[100][100],determinante;
  std::cout << "orden de matriz n*n" << '\n';
  std::cin >> n;
  m=n-1;
  std::cout <<m<< '\n';
  std::cout << "introduzca los elementos" << '\n';
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cout << "ingrese matriz en : [" <<i<<"]["<<j<<"]: ";
      std::cin >> a[i][j];
    }
  }
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      std::cout << "\t"<<a[i][j];
    }
    std::cout << "\n";
  }
  for (size_t k = 0; k < m; k++) {
      l=k+1;
    for (size_t i = l; i <=n; i++) {
      for (size_t j = l; j < n; j++){
        a[i][j] = ( a[k][k]*a[i][j]-a[k][j]*a[i][k] )/a[k][k];
      }
    }
    determinante=determinante*a[k+1][k+1];
  }
  std::cout << "la determinante es: " <<determinante;
  return 0;
}
