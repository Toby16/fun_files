#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 * I'm a beginner in C programming
 * I'm just playing around with code
*/

int main(){
    printf("Enter char value: ");
    char value = getchar();
    char answer;
    if ((value <= 'z') && (value >= 'a')){
        printf("[LOWERCASE]\n");
        if ((value <= 'z') && (value >= 'a')){
            printf("Display range? (Y/N): ");
            answer = getchar();
            if ((answer == 'y') || (answer == 'Y')){
                while (value <= 'z'){
                    putchar(value);
                    value++;
                }
                putchar('\n');
            }
            else if ((answer == 'n') || (answer == 'N')){
                printf("Program end!");
            }
        }
    }
    else if ((value >= 'A') && (value <= 'Z')){
        printf("[UPPERCASE]\n");
        if ((value <= 'Z') && (value >= 'A')){
            printf("Display range? (Y/N): ");
            answer = getchar();
            if ((answer == 'y') || (answer == 'Y')){
                while (value <= 'Z'){
                    putchar(value);
                    value++;
                }
                putchar('\n');
            }
            else if ((answer == 'n') || (answer == 'N')){
                printf("Program end!");
            }
        }
    }

    
    return 0;
}
