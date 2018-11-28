#include <stdio.h>  
int main() {  
    char array[41][81], c;  
    int i = 0, j = 0;  
    while ((c = getchar()) != '\n') {  
        if (c == ' ') {  
            array[i][j] = '\0';  
            i++;  
            j = 0;  
        }  
        else {  
            array[i][j++] = c;  
        }  
    }  
    array[i][j] = '\0';  
    printf("%s", array[i--]);  
    while (i >= 0) {  
        printf(" %s", array[i--]);  
    }  
    return 0;  
}
