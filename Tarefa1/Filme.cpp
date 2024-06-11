#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main( ){
    float A, B, res;

    cin >> A >> B;
    res = (B/A)*100 - 100;
    cout << fixed << setprecision(2) << res <<"%" << endl;
}