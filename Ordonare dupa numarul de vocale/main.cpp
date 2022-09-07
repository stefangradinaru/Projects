#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int LENGHT_MAX = 1001, LENGHT_LINE = 100, LENGHT_COLUMN = 21;
    char text[LENGHT_MAX];
    int vowels[LENGHT_LINE + 1];
    int total = 0;
    char words[LENGHT_LINE][LENGHT_COLUMN];
    while (cin.getline(text, LENGHT_MAX)) {
        char *word = strtok(text, " ");
        while (word != NULL) {
            int vowels_word = 0;
            int lenght_word = strlen(word);
            for (int i = 0; i < lenght_word; ++i) {
                if (strchr("AEIOUaeiou",word[i]) != 0) {
                    ++vowels_word;
                }
            }
            vowels[total] = vowels_word;
            strcpy(words[total], word );
            ++total;
            word = strtok(NULL, " ");
        }
    }
    for (int i = 0; i < total; ++i) {
         for (int j = i + 1; j < total; ++j) {
            if (vowels[i] > vowels[j]) {
                swap(vowels[i], vowels[j]);
                swap(words[i], words[j]);
            } else if (vowels[i] == vowels[j]) {
                if (strcmp(words[i], words[j]) > 0) {
                    char aux[LENGHT_COLUMN];
                    strcpy (aux, words[i]);
                    strcpy (words[i], words[j]);
                    strcpy (words[j], aux);
                }
            }
         }
    }
    for (int i = 0; i < total; ++i) {
        cout << words[i] << "\n";
    }
    return 0;
}
