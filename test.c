#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 * 
 * i += 1 is the same is i++
*/

int main(){
    int i, j;
    int table = 12;
    int max = 12;

    for (i = 0; i <= table; i += 1){
        //i += 1 is the same as i++
        for (j = 0; j <= max; j += 1){
            //j += 1 is the same as j++
            printf("%d * %d = %d\n", i, j, i * j);
        }
        putchar('\n');
        //You can also use printf("\n")
    }

    return 0;
}