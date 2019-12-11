#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void bubble_sort(vector<int> &vec, ofstream *ofil = 0);
void display(vector<int> &vec);
void swap(int &a, int &b);

int main(){
     vector<int> vec;
    int number;
    
    cout << "Please input your number: " << endl;
    while(cin >> number)
        vec.push_back(number);
    
    ofstream ofil("defaultParameter.txt");
    
    cout << "vector before sort: " << endl;
    display(vec);
    bubble_sort(vec, &ofil);
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
void bubble_sort(vector<int> &vec, ofstream *ofil){  //默认值只能指定一次，一般在声明函数时指定
    for(int i = 0; i < vec.size(); i++){
        for(int k = i+1; k < vec.size(); k++){
            if(vec[i] > vec[k]){
                if(ofil)
                    *ofil << "about to call wap! ix: " << i
                           << " jx: " << k << "\tsawpping: "
                           << vec[i] << " with " << vec[k] << endl;
                swap(vec[i], vec[k]);
            }
        }
    }
}