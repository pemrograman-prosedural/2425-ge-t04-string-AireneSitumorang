// 12S24053 - Dea Hutapea
// 12S24058 - Airene Situmorang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char input[61]; 
    printf("Input: ");
    scanf("%s", input);

    int length = strlen(input);
    if (length < 3 || length > 60 || length % 3 != 0) {
        printf("Input tidak valid.\n");
        return 1;
    }

    printf("Output: ");
    for (int i = 0; i < length; i += 3) {
        char ascii_str[4];
        ascii_str[0] = input[i];
        ascii_str[1] = input[i+1];
        ascii_str[2] = input[i+2];
        ascii_str[3] = '\0';

        int ascii_code = atoi(ascii_str);
        printf("%c", (char)ascii_code);
    }
    printf("\n");
   
    return 0;
}
