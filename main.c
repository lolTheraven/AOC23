#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("inputDay1.txt", "r");
    if(f == NULL) {
        printf("Cant open the file!");
    }
    fclose(f);

    return 0;
}