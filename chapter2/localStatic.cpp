#include <iostream>
#include <vector>
using namespace std;

const vector<int> * fibon_seq(int);

int main(){
    cout << "Please input you want positon in Fib: " << endl;
    int pos;
    cin >> pos;

    const vector<int> * fibon = fibon_seq(pos);
    cout << "Fib list is : " << endl;
    for(int i = 0; i < (*fibon).size(); i++)
        cout << (*fibon)[i] << " ";
    
    return 0;
}

const vector<int> *fibon_seq(int position){
    const int max_size = 1024;
    static vector<int> elems;

    if(position <=0 || position > max_size){
        cerr << "fibon invalid size: "
                << position << " can't fulfill request" << endl;
    }

    for(int ix = elems.size(); ix < position; ix++){
        if(ix == 0 || ix == 1)
            elems.push_back(1);
        else
            elems.push_back(elems[ix-1] + elems[ix-2]);
    }

    return &elems;
}