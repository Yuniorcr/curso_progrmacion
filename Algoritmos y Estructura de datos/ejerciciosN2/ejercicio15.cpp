#include <iostream>
#include <string>
using namespace std;
char response;
string s;
int upper, lower, other, count;
void capCheck(string);
int main()
{
    count = 0;
    upper = 0;
    lower = 0;
do
{
    cout<<"Obtén el número de letras mayúsculas y minúsculas en tu oración"<<endl;
    cout<<endl;
    cout<<"Escriba su oración abajo sin espacios .."<<endl;
    cin>>s;
    capCheck(s);
    cout<<"¿Te gustaria continuar? Y/N"<<endl;
    cin>>response;
}while(response == 'y' || response == 'Y');
return 0;
}
void capCheck(string s)
{
    while(s[count] != 0)
    {
        if(s[count] >= 'a' && s[count] <= 'z')
        {
            lower++;
            count++;
        }
        else if (s[count] >= 'A' && s[count] <= 'Z')
        {
            upper++;
            count++;
        }
        else
            other++;
    }
    cout<<"El numero de letras mayusculas es: "<<upper<<endl;
    cout<<"El numero de letras minusculas es: "<<lower<<endl;
}
