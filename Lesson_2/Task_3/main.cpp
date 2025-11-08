#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u'};

    int allLeters = 0;
    int vowelsLetters = 0;
    int consonatsLetters = 0;

    cout << "Enter word: " << endl;
    string word;
    cin >> word;


    for (char letter : word) {
        letter = tolower(letter);
        bool found = false;

        for (char vow : vowels) {
            if (letter == vow) {
                vowelsLetters++;
                allLeters++;
                found = true;
                break;
            }
        }
        if (!found) {
            consonatsLetters++;
            allLeters++;
        }
    }

    double procentvowels = (vowelsLetters * 100) / allLeters;
    double procentconsonats = (consonatsLetters * 100) / allLeters;

    cout << "Vowels: " << vowelsLetters << endl;
    cout << "Consonats: " << consonatsLetters << endl;
    cout << "All leters: " << allLeters << endl;
    cout << "Percent of vowels: " << procentvowels << "%" << endl;
    cout << "Percent of consonats: " << procentconsonats << "%" << endl;


    return 0;
}
