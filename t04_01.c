// 12S24053 - Dea Hutapea
// 12S24058 - Airene Situmorang

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {
  char input[61];
  scanf("%s", input);
    
    int lenght = strlen(input);
    for (int i = 0; i < lenght; i+=3) {
        char a[4] = {input[i], input[i+1], input[i+2], '\0'}; 
        int ascii = atoi(a); 
        printf("%c", ascii);  
    }
    
    printf("\n");  

  return 0;
}
 
