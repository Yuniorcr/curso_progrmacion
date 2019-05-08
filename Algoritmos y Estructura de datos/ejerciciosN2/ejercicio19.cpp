#include <iostream>
using namespace std;
int main(){
  
         string cad="",pal;
         cout<<"ingresa una palabra"<<endl;
    cin>>pal;
    int t=pal.length();
    for(int i=t;i>0;i--){
        cad=cad+pal.substr((i-1), 1);
    }
    cout<<cad ;
    return 0;
}
