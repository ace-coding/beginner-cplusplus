#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "hello " << name << endl;
    return 0;
}

