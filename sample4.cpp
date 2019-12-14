#include <iostream>
#include <vector>

using namespace std;
const vector<int> * pentaList(int);
int returnNumber(int);

const vector<int> * pentaList(int positon){
    static vector<int> vec;
    if(positon <= 0 || positon > 1024)
        return 0;
    for(int i = vec.size() + 1; i <= positon; i++){
        vec.push_back(i * (3 * i -1) / 2);
    }
    return &vec;
}
int returnNumber(int position){
    const vector<int> *pointer = pentaList(position);
    if(pointer == 0)
        return -1;
    return (*pointer)[position-1];
}

int main(){
    int position;

    cout << "Please input position: ";
    cin >> position;
    cout << returnNumber(position);

    return 0;
}