#include <iostream>

using namespace std;


//This function wont return anything hence (void)
//Functions can also be initialized first before main function
//and then defined after main function
void sayHi (string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}

// main function executes code by default
int main ()
{
    sayHi("Ying", 27);
    sayHi("Tom", 35);
    sayHi("Mike", 68);

    return 0;
}