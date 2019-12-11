/*
    实现冒泡排序
    了解reference和pointer
*/

#include <vector>
#include <iostream>

using namespace std;

void swap(int &, int &);
void display(vector<int> &);
void bubble(vector<int> &);


int main(){
    vector<int> vec;
    int number;
    
    cout << "Please input your number: " << endl;
    while(cin >> number)
        vec.push_back(number);
    
    cout << "vector before sort: " << endl;
    display(vec);
    bubble(vec);
    cout << "\nvector after sort: " << endl;
    display(vec);

    return 0;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void display(vector<int> &vec){
    for(int ix = 0; ix < vec.size(); ix++)
        cout << vec[ix] << " ";
}
void bubble(vector<int> &vec){
    for(int i = 0; i < vec.size(); i++){
        for(int k = i+1; k < vec.size(); k++){
            if(vec[i] > vec[k])
                swap(vec[i], vec[k]);
        }
    }
}