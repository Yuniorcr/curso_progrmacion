#include <iostream>

int main(int argc, char const *argv[]) {

  int primos[25];
  int contprimos=0;
  for (size_t i = 0; i < 100; i++) {
    int cont=0;
    for (size_t j = 1; j <=i; j++) {
      if (i%j==0) {
        cont++;
      }
    }
    if (cont==2) {
      primos[contprimos]=i;
      contprimos++;
    }
  }
  for (size_t i = 0; i <contprimos; i++) {
    std::cout <<primos[i]<<" ";
  }
  return 0;
}
