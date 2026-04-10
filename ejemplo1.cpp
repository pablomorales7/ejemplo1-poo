#include<iostream>

using namespace std;

main(){
    // Hola Mundo
int num1,num2;
float mu, re, su, di;
cout<<"Ingrese el primer valor: "; cin >> num1;
cout<<"Ingrese el segundo valor: "; cin >> num2;
mu = num1 * num2;
re = num1 - num2;
su = num1 + num2;
di = num1 / num2;

cout <<"El total de la multiplicación es: " << mu << endl;
cout <<"El total de la resta es: " << re << endl;
cout <<"El total de la suma es: " << su << endl;
cout <<"El total de la división es: " << di << endl;
}
