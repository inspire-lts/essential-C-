#include <iostream>
#include <vector>
using namespace std;

int main(){
    int *pi = new int(1024);
    cout << pi << endl;
    cout << *pi << endl;

    vector<int> vec;
    cout << &vec;
    delete pi;
    return 0;
}