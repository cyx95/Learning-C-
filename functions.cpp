#include <iostream>

using namespace std;


int main () 
{
    bool isMale = false;
    bool isTall = false;

    if (isMale && isTall) {
        cout << "You are a tall male" << endl;
    } else if (isMale && !isTall) {
        cout << "You are a short male" << endl;
    } else if (!isMale && isTall) {
        cout << "You are tall but not male" << endl;
    } else {
        cout << "You are not male and not tall" << endl;
    }

    return 0;
}
// ----------------------------------------------

//Functions that have return statements

// double cube (double num) {
//     return  num * num * num;
// }

// int main ()
// {
//     double answer = cube (5.0);
//     cout << answer << endl;

//     return 0; 
// }


// ----------------------------------------------------------

//This function wont return anything hence (void)
//Functions can also be initialized first before main function
//and then defined after main function


// void sayHi (string name, int age) {
//     cout << "Hello " << name << " you are " << age << endl;
// }

// main function executes code by default
// int main ()
// {
//     sayHi("Ying", 27);
//     sayHi("Tom", 35);
//     sayHi("Mike", 68);

//     return 0;
// }
