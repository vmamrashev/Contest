#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;

    char MorseABC[26][2][4] = {{"A", ".-"},   {"B", "-..."}, {"C", "-.-."}, {"D", "-.."},  {"E", "."},
                               {"F", "..-."}, {"G", "--."},  {"H", "...."}, {"I", ".."},   {"J", ".---"},
                               {"K", "-.-"},  {"L", ".-.."}, {"M", "--"},   {"N", "-."},   {"O", "---"},
                               {"P", ".--."}, {"Q", "--.-"}, {"R", ".-."},  {"S", "..."},  {"T", "-"},
                               {"U", "..-"},  {"V", "...-"}, {"W", ".--"},  {"X", "-..-"}, {"Y", "-.--"},
                               {"Z", "--.."}};
    scanf("%d", &n);
    char morseLetter[4];
    char morseLetter1[4];
    char* string = malloc(n * sizeof(char));
    for (int i = 0; i < n; i++) {
        scanf("%s", morseLetter);
        for (int j = 0; j < 26; j++) {
            morseLetter1[0] = MorseABC[j][1][0];
            morseLetter1[1] = MorseABC[j][1][1];
            morseLetter1[2] = MorseABC[j][1][2];
            morseLetter1[3] = MorseABC[j][1][3];
            if (strcmp(morseLetter, morseLetter1) == 0) {
                string[i] = MorseABC[j][0][0];
                break;
            }
        }
    }
    printf("%s \n", string);

    return 0;
}