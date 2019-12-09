#include <iostream>
#include <vector>

using namespace std;

int main(){
    const int numbers = 2;
    int array[numbers];
    vector<int> ivec(numbers);

    cout << "Please give number to array: " << endl;
    for(int i = 0; i < numbers; i++)
        cin >> array[i];
    cout << "Please give number to vector: " << endl;
    for(int k = 0; k < ivec.size(); k++)
        cin >> ivec[k];
    
    int array_totals = 0, vec_totals = 0;
    for(int i = 0; i < numbers; i++)
        array_totals += array[i];
    for(int i = 0; i < ivec.size(); i++)
        vec_totals += ivec[i];

    cout << "array sum and ave:"
         << array_totals 
         << '\n'
         << array_totals / numbers << endl;
    cout << "vector sum and ave: "
         << vec_totals 
         << '\n'
         << vec_totals / numbers << endl;

    return 0;
}