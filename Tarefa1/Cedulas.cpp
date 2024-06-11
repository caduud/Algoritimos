#include <iostream>
using namespace std;
int main( ){
    int N, r100, r50, r20, r10, r5, r2, r1, rest;

    cin >> N;
    cout << N << endl;
    r100 = N/100;
    cout << r100 << " nota(s) de R$ 100,00" << endl;
    rest = (N%100);
    r50 = rest/50;
    cout << r50 << " nota(s) de R$ 50,00" << endl;
    rest = (rest%50);
    r20 = rest/20;
    cout << r20 << " nota(s) de R$ 20,00" << endl;
    rest = (rest%20);
    r10 = rest/10;
    cout << r10 << " nota(s) de R$ 10,00" << endl;
    rest = (rest%10);
    r5 = rest/5;
    cout << r5 << " nota(s) de R$ 5,00" << endl;
    rest = (rest%5);
    r2 = rest/2;
    cout << r2 << " nota(s) de R$ 2,00" << endl;
    rest = (rest%2);
    r1 = rest/1;
    cout << r1 << " nota(s) de R$ 1,00" <<endl;
}