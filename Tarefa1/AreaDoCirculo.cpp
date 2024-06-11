#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main( ){
    double raio, area, n;

    cin >> raio;
    n =  3.14159;
    area = n * pow(raio, 2);
    cout << "A=" << fixed << setprecision(4) << area << endl;
}