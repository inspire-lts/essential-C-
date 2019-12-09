#include <iostream>
#include <string>            // 注释掉头文件string并不会报错，iostream中间接包含了std::string
using namespace std;         // 注释掉改行会报错，string、cout、cin都没定义

int main(){
    string user_name;
    cout << "Please input your first name: " << endl;
    cin >> user_name;
    cout << "hello,"
         << user_name
         << " and good bye!";

    return 0;
}