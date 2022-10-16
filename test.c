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

    if ((value <= 'z') && (value >= 'a')){
        while (value <= 'z'){
            putchar(value);
            value++;
        }
        putchar('\n');
    }
    else if ((value >= 'A') && (value <= 'Z')){
        while (value <= 'Z' ){
            putchar(value);
            value++;
        }
        putchar('\n');
    }


    return 0;
}