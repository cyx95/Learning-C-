#include <iostream>

using namespace std;

int main() 
{
    string phrase = "Giraffe Academy";
    phrase[0] = 'B';
    cout << phrase.find("ffe", 0) << endl;
    cout << phrase.length() << endl;

    string phraseSub;
    phraseSub = phrase.substr(8, 3);
    cout << phraseSub << endl;

    cout << phrase[0] << endl;
    cout << phrase << endl;
}