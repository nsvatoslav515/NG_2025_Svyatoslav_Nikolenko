#include <iostream>

using namespace std;

int main()
{
    int one, two, three, four, five;
    cout << "Enter 5 numbers: " << endl;
    cin >> one;
    cin >> two;
    cin >> three;
    cin >> four;
    cin >> five;
    
    int array[5] = {one, two, three, four, five};
    
    int max = 0;
    
    for (int counter = 0; counter < 5; counter++) {
        if (array[counter] >= max) {
            max = array[counter];
        }
    }
    
    
    for (int row = 1; row <= max; row++) {
        cout << "\n";
        for (int columnIndex = 0; columnIndex < 5; columnIndex++) {
            if (array[columnIndex] >= row) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
    }
    return 0;
}