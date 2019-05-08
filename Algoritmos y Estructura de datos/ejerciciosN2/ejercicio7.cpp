#include <iostream>
int main(int argc, char const *argv[]) {
  float sum=0;
  int array[5],x[]={0};
  std::cout << "ingrese 5 numeros: " << '\n';
  for (size_t i = 0; i < 5; i++) {
    std::cin >> x[i];
  }
  for (size_t i = 0; i < 5; i++) {
    sum=sum+x[i];
  }
  std::cout << "la media es: "<<sum/5;
  return 0;
}
