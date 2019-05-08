#include<iostream>
int main(int argc, char const *argv[]) {
  int a=10,b=20;
  int  * const p=&a;
  *p=15;
  p=&b;

  return 0;
}
