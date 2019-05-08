#include <iostream>
int main(int argc, char const *argv[]) {
  int suma;
  int a=5,b=10;
  int *p1=&a,*p2=&b;

  p1=&a;
  p2=&a;
  std::cout << "primer paso" << '\n';
  std::cout << "\nel valor de a es: "<<*p1<<"\tsu direccion de memoria es:"<<p1;
  std::cout << "\nel valor de a es: "<<*p1<<"\tsu direccion de memoria es:"<<p1;
  std::cout << "\nsegundo paso" << '\n';
  p1=&b;
  p2=&b;
  std::cout << "\nel valor de b es: "<<*p1<<"\tsu direccion de memoria es:"<<p1;
  std::cout << "\nel valor de a es: "<<*p2<<"\tsu direccion de memoria es:"<<p2;
  p1=&a;
  suma=*p1+*p2;
  std::cout <<"\nla suma es:"<<suma;
  return 0;
}
