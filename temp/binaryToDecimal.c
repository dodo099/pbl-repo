#include <stdio.h>

int binaryToDecimal(const char tab[]) {
    int decimal = 0;
    int i = 0;

    while (tab[i] != '\0') {
        i++;
    }

    int length = i;
    int mult = 1;
    for (i = 0; i < length; i++) {
        if (tab[i] == '1') {
            decimal += mult;
        }
        mult *= 2;
    }
    return decimal;
}

int main() {
    char binary[1000];
    printf("Wprowadz liczbe binarna: ");
    scanf("%s", &binary);
    int newDecimal = binaryToDecimal(binary);

    printf("Twoja liczba binarna w przeliczeniu na dziesietna wynosi: %d", newDecimal);
    return 0;
}