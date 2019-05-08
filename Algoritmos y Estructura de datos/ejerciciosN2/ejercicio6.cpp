#include <iostream>
#include <ctime>
int main(int argc, char const *argv[]) {
  int a=0,b=0,sum=0;
  int m[10];
  do{
    if (a%2 == 0 ) {
    m[b++]=a;
    }
  }while(a++ < 20);
  for (size_t i = 1; i<=9; i++) {
    std::cout << " " <<m[i];
    sum=sum+m[i];
  }
  std::cout << "\nla suma es: " <<sum;
  return 0;
}
