#include <iostream>
#include <string>

using namespace std;

bool fibon_elem(int , int &);

int main(){
    int pos;
    cout << "Please enter a positon:";
    cin >> pos;

    switch(pos){
        default:
        case 2:
            cout << "1 ";
        case 1:
            cout << "1 ";
            break;
    }

    int elem;
    if(fibon_elem(pos, elem))
        cout << "\nthat's all ";
    else cout << "Sorry. Could not calculate element # "
              << pos << endl;

    return 0;
}

bool fibon_elem(int pos, int &elem ){
    if(pos <= 0 || pos > 1024){
        elem = 0;
        return false;
    }

    //位置为1和2时，eleme的值为1
    elem = 1;
    int n_2 = 1, n_1 = 1;

    for(int ix = 3; ix <= pos; ++ix){
        elem = n_2 + n_1;
        n_2 = n_1; n_1 = elem;
        cout << elem << ( !(ix % 10) ? "\n":" ");
    }

    return true;
}