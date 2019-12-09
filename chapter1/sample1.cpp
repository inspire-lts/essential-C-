#include <iostream>
#include <string>
using namespace std;

int main(){
    string user_name;
    cout << "Please input your first name: " << endl;
    cin >> user_name;
    cout << "hello,"
         << user_name
         << " and good bye!";

    return 0;
}