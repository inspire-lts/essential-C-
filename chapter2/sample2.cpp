#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool pentagonalList(vector<int> &vec, int position);
void printPentagonal(vector<int> &vec, string str, ostream &os=cout);

bool pentagonalList(vector<int> &vec, int positon){
    if(positon <= 0 || positon > 1024){
        cout << "Please input correct positon!";
        return false;
    }
    for(int i=1; i<=positon;i++)
        vec.push_back(i * (3 * i - 1) / 2);
    return true;
}
void printPentagonal(vector<int> &vec, string str, ostream &os){
    os << "type of output is " << str << endl;
    for(int i=0; i<vec.size(); i++)
        os << vec[i] << endl;
}

int main(){
    int positon;
    vector<int> vec;
    string str("int");
    cout << "Please input positon: " << endl;
    cin >> positon;

    if(pentagonalList(vec, positon))
        printPentagonal(vec, str);

    return 0;
}