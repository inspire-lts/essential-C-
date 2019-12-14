#include <iostream>
#include <vector>

using namespace std;

inline bool checkPenta(int position);
void pentagoalList(vector<int> &vec, int position);

bool checkPenta(int position){
    if(position <= 0 || position > 1024){
        cout << "Please input correct positon!" << endl;
        return false;
    }
    return true;
}
void pentagoalList(vector<int> &vec, int position){
    if(checkPenta(position)){
        for(int i = 1; i <= position; i++)
            vec.push_back(i * (3 * i - 1) / 2);
    }
}

int main(){
    int positon;
    vector<int> vec;

    cout << "Please input positon: ";
    cin >> positon;

    pentagoalList(vec, positon);

    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";

    return 0;
}