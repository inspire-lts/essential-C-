#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(){

    ifstream infile("sample7_data.txt");
    vector<string> vec;
    string word;
    if(!infile){
        cerr << "can't open this file!";
        return 0;
    }
    else{
        while(infile){
            infile >> word;
            vec.push_back(word);
        }
    }
    
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i];

    return 0;
}