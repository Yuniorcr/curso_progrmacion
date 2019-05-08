#include <iostream>
int main(int argc, char const *argv[]) {
  int array[7],x[]={0},sum1=0,sum2=0;
  for (size_t i = 0; i < 7; i++) {
    std::cin >> array[i];
    if (array[i]>0) {
      sum1=sum1+array[i];
    }
    else{
      sum2=sum2+array[i];
    }
  }
  for (size_t i = 0; i < 7; i++) {
    std::cout << array[i] <<" ";
  }
  std::cout << "\nla suma +: " <<sum1;
  std::cout << "\nla suma -: " <<sum2;
  return 0;
}
