#include <iostream>

using namespace std;

int main() 
{ 
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    return 0;
}

// int main() 
// {
//  cin is used for int or char
//     int age;  
//     cout << "Enter your age: ";
//     cin >> age;

//     cout << "You are " << age << " years old" << endl;

//     return 0;
// }
