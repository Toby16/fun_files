#include <stdio.h>


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