#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int wholeNum = 5;
    double decimalNum = 5.5;

    wholeNum++;

    cout << pow(2, 5) << endl; 
    cout << sqrt(36) << endl;
    cout << round(4.3) << endl; // rounds to nearest whole number
    cout << ceil(4.1) << endl; //rounds up
    cout << floor(4.8) << endl; //rounds down
    cout << fmax(3, 10) << endl; //tell us which is the biggest integer passed
    cout << fmin(3, 10) << endl; // tells us which is the smallest integer passed

    return 0;
}