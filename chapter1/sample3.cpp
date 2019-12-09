#include <iostream>
#include <string>
using namespace std;

int my_main(){           // 定义为一个函数，但是没有调用它
    string user_name;
    cout << "Please input your first name: " << endl;
    cin >> user_name;
    cout << "hello,"
         << user_name
         << " and good bye!";

    return 0;
}