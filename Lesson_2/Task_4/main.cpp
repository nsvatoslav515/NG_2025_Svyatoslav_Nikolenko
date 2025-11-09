#include <iostream>

using namespace std;

bool isLetter(char c) {
    return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}



int main()
{
    int words = 0;
    
    char text[100];
    cout << "Enter text: ";
    cin.getline(text, 100);
    
    for (int counter = 0; text[counter] != '\0'; counter++) {
        if (isLetter(text[counter]) && (counter == 0 || !isLetter(text[counter - 1]))) {
            words++;
        }
    }
    cout << "Words : " << words << endl;
    return 0;
}