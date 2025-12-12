#include <iostream>
#include <cctype>
using namespace std;


int main() {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u'};

    int allLeters = 0;
    int vowelsLetters = 0;
    int consonatsLetters = 0;

    cout << "Enter word: " << endl;
    char word[100];
    cin >> word;


    for (int counter = 0; word[counter] != '\0'; counter++) {
        char currentChar = word[counter];
        bool isVowel = false;

        for (int vow = 0; vow < 5; vow++) {
            if (vowels[vow] == currentChar || vowels[vow] - 32 == currentChar) {
                isVowel = true;
                break;
            }
        }
        if (isVowel) {
            vowelsLetters++;
            allLeters++;
        } else {
            consonatsLetters++;
            allLeters++;
        }
    }

    double procentvowels = (vowelsLetters * 100.0) / allLeters;
    double procentconsonats = (consonatsLetters * 100.0) / allLeters;

    cout << "Vowels: " << vowelsLetters << endl;
    cout << "Consonats: " << consonatsLetters << endl;
    cout << "All leters: " << allLeters << endl;
    cout << "Percent of vowels: " << procentvowels << "%" << endl;
    cout << "Percent of consonats: " << procentconsonats << "%" << endl;


    return 0;
}
