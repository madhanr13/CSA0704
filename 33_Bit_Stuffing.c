#include <stdio.h>
#include <string.h>

int main() {
    char input[100], output[200];
    int i, j = 0, count = 0;

    printf("Enter binary data: ");
    scanf("%s", input);

    for (i = 0; i < strlen(input); i++) {
        output[j++] = input[i];
        if (input[i] == '1') {
            count++;
            if (count == 5) {
                output[j++] = '0'; // Stuff a zero
                count = 0;
            }
        } else {
            count = 0;
        }
    }
    output[j] = '\0';

    printf("Stuffed data: %s\n", output);
    return 0;
}
