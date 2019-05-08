#include <iostream>
#include <ctime>

void mostrar(int b[], int array) {
  for (size_t i = 0; i <array; i++) {
    std::cout << b[i] <<" ";
  }
}
int main(int argc, char const *argv[]) {

  const int array=10;
  int a[array];

  srand(time(0));
  for (int i = 0; i <array; i++)
    a[i] = 4 + rand() % (14+1-4) ;
    mostrar(a, array);

  return 0;
}
