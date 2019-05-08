#include <iostream>
#include <ctime>
int main(int argc, char const *argv[]) {
  int a=0,b=0;
  int m[50];
  do{
    if (a%2 == 0 ) {
    m[b++]=a;
    }
  }while(a++ < 100);
  for (size_t i = 1; i<=49; i++) {
    std::cout << " " <<m[i];
  }
  return 0;
}
