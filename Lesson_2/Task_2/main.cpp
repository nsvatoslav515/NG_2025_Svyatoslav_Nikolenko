#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "How many numbers? ";
    cin >> size;
    
    int array[size]; 
    
    cout << "Enter " << size << " numbers: " << endl;
    for (int counter = 0; counter < size; counter++) {
        cin >> array[counter];
    }
    

    int max = 0;
    for (int counter = 0; counter < size; counter++) {
        if (array[counter] > max) {
            max = array[counter];
        }
    }
    
    for (int row = 1; row <= max; row++) {
        cout << endl;
        for (int col = 0; col < size; col++) {
            if (array[col] >= row) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
    }
    
    return 0;
}