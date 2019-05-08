#include <iostream>
#include <ctime>
int main(int argc, char const *argv[]) {
  int a=0,b=0;
  int m[34];
  do{
    if (a%3 == 0 && a != 100) {
    m[b++]=a;
    }
  }while(a++ <100);
  for (size_t i = 0; i<34; i++) {
    std::cout << " " <<m[i];
  }
  return 0;
}
