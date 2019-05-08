#include <iostream>

int main(int argc, char const *argv[]) {
  int num,*p;
  std::cout << "introduzca un numero a reconocer si es primo o no es primo" << '\n';
  std::cin >> num;
  p=&num;

  if(*p%2==1) {
    std::cout << "el numero es primo" << '\n';
    std::cout << "su direccion  es: " <<p;
    }else{
    std::cout << "el numero no es primo" << '\n';
  }
  return 0;
}
