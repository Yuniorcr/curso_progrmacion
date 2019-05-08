#include <iostream>

int main(int argc, char const *argv[]) {
  int f;
  std::cin >> f;
  int x[20][20],a[20][20],cont[20][20];
  for (size_t i = 0; i < f; i++) {
    for (size_t j = 0; j < f; j++) {
      if (i==j) {
        x[i][j]=1;
      }else{
        x[i][j]=0;
      }
      std::cout << x[i][j] <<" ";
    }
    std::cout << "\n";
  }
  for (size_t i = 0; i < f; i++) {
    for (size_t j = 0; j < f; j++) {
      for (size_t k = 0; k < f; k++) {
        cont[i][j]=(a[k][k]*a[i][j]-a[i][k]*a[k][j])/a[0][0];
      }
    }
  }
  return 0;
}
