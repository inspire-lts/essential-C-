#include <iostream>
#include <string>

using namespace std;

int main(){
    string user_name,user_content;
    cout << "Please input your name: ";
    cin >> user_name;
    while (user_name.length() <= 2)
    {
        cerr << "your name length should more than 2 words!";
        cin >> user_name;
    }
    cout << "Please input your content: " << endl;
    cin >> user_content;

    cout << user_name + " say: " + user_content;

    return 0;
    
}