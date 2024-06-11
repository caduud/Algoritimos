#include <iostream>
using namespace std;
int main( ){
    int tempo, rest, ano, mes, dia;

    cin >> tempo;
    ano = tempo/365;
    cout << ano << " ano(s)" << endl;
    rest = tempo%365;
    mes = rest/30;
    cout << mes << " mes(es)" << endl;
    rest = rest%30;
    dia = rest;
    cout << rest << " dia(s)" << endl;
    
}