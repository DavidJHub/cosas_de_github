#include <iostream>
#include <typeinfo>
using namespace std;

int factorial(int n);
int main (){
    int n;
// despues del 31 pasan cosas raras... supongo que alguna librería deja trabajar con números mayores de orden 10^10
    cout << "Introduce un número entero entre 0 y 31" << endl;
    cin >> n;
    cout << " el número es: " << n << endl;
//    cout << " el tipo es: " << typeid(n) << endl;
    try{
        int result = factorial(n);
        cout<< "El factorial es " << result << endl;
    }
    catch(const char* msg)
    {
        cerr<< msg<< endl;
    }
    
    return 0;
}

int factorial(int n){
    if(n>31)
    {
        throw "De momento, el código no deja trabajar con números de orden igual o mayor a 10^10 :( ";
    }

    if(n>1){
            return n*factorial(n-1);
           }
    else{
            return n;
        }

}
