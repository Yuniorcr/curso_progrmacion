#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int elector ;
    int v[10];
    srand(time(0));
    int g;
    for (int i=0;i<10;i++){
        g=i;
        elector= 4 +rand()%(14+1-4);
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
    for (int i=0;i<10;i++){
    cout<<v[i]<<" ";
    }
    return 0;
}
