#include <iostream>
#include <string>

using namespace std;

int main(){
    string first_name,last_name;
    cout << "Please input your fisrt: ";
    cin >> first_name;
    cout << "and input your last: ";
    cin >> last_name;

    cout << first_name + " " + last_name;

    return 0;
}