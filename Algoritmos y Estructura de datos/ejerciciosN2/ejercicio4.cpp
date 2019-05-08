#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int elector,n;
    int v[5];
    srand(time(0));
    int g;
    std::cout << "ingrese numero base" << '\n';
    std::cin >> n;
    for (int i=0;i<5;i++){
        g=i;
        elector= n +rand()%(n+5+1-n);
        for (int d=0;d<=g;d++){
            if(elector==v[d]){
                g=g-g;
                i=i-1;
            }
            while((g==i)&&(elector!=v[d])&&(d==i)){
            v[i]=elector;
            }
        }
    }
    for (int i=0;i<5;i++){
    cout<<v[i]<<" ";
    }
    return 0;
}
