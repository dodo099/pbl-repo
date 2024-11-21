#include <stdio.h>
#include <string.h>

int main() {
    char tab1[] = {"abcde"};
    char tab2[] = {"fghij"};

    int sizetab1 = sizeof(tab1)/sizeof(tab1[0]) - 1;
    int sizetab2 = sizeof(tab2)/sizeof(tab2[0]) - 1;

    int sizetabx = sizetab1 + sizetab2;
    char tabx[sizetabx+1];

    for (unsigned i = 0; i < sizetab1; i++) {
        tabx[i]=tab1[i];
    }

    for (unsigned i = 0; i < sizetab2; i++) {
        tabx[sizetab1 + i] = tab2[i];
    }

    tabx[sizetabx] = '\0';

    printf("Merged tab: ");
    for (int i=0; i < sizetabx; i++) {
        printf("%c", tabx[i]);
    }

    return 0;
}