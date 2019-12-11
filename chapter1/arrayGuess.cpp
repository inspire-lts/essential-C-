#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    const int seq_size = 18;  //元素个数
    int elem_seq[seq_size] = {
        1, 2, 3, 3, 4, 7, 2, 5, 12,
        3, 6, 10, 4, 9, 16, 5, 12, 22
    };          // 元素
    string seq_name[] = {"Fibonaci", "Lucas", "Pell", "Triangular", "Square", "Pentagonal"};   // 数列名称
    bool next_seq = true;   // 用户想要再猜一次
    int cur_tuple = 0;  // 当前索引
    int user_guess;

    while(next_seq == true && cur_tuple < seq_size){
        cout << "The fisrt two element of the sequence are: "
             << elem_seq[cur_tuple] << ", "
             << elem_seq[cur_tuple+1] << ","
             <<"\nWhat is the next element?";
        cin >> user_guess;
        if(user_guess == elem_seq[cur_tuple+2]){
            cout << "Very good.Yes, "
                 << elem_seq[cur_tuple+2]
                 << " is the next element in the "
                 << seq_name[cur_tuple / 3] << "sequence.\n";
        }else
            cout << "you guess wrong!" << endl;
        cout << "do you want to continue?(y/n):\n";
        char usr_rsp;
        cin >> usr_rsp;
        if (usr_rsp == 'N' || usr_rsp == 'n') 
            next_seq = false;
        else
            cur_tuple += 3;
        
    }
}