#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    int peso;
    float alt, imc;
    cin >> peso >> alt;
    imc = peso/ (alt*alt);
    if (imc < 18.5){
        cout << "Abaixo do peso" << endl;
    }
    else{
        if((imc >= 18.5) && (imc < 25)){
            cout << "Peso normal" << endl;
        }
        else{
            if ((imc >= 25) && (imc < 30)){
                cout << "Acima do peso" << endl;
            }
            else{
                cout << "Obeso" << endl;
            }ss
        }
    }
}