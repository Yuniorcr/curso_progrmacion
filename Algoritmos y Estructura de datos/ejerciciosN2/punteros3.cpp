#include <iostream>
int main(int argc, char const *argv[]) {
  int n,suma=0;
  std::cout << "ingrese tamanio del arreglo" << '\n';
  std::cin >> n;
  int a[n];
  int *p=&a[0];
  for (size_t i = 0; i < n; i++) {
    std::cin >> *p;
    suma=suma+*p;
    *p++;
  }
std::cout << "la suma es: " <<suma;
  return 0;
}
