#include <iostream>
#include <cmath>

using namespace std;

int main ()
{   
    // an array of numbers that can store 20 elements
    // can be initialized and not defined 
    int arrayOfInt[20] = {4, 8, 15, 16, 23, 42};

    // elements defined later
    arrayOfInt[10] = 100;
    cout << arrayOfInt[10] << endl;


    return 0;
}