#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main( ){
    int temp, velm;
    float lt, km;

    cin >> temp >> velm;
    km = velm * temp;
    lt = km/12;
    cout << fixed << setprecision(3) << lt << endl;
}