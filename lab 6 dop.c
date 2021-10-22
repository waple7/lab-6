#include <stdio.h>
#include<stdlib.h>

int main() {
    char *arr = NULL;
    arr = malloc(sizeof(char) * 4);

    *arr = 'W';
    *(arr + 1) = 'O';
    *(arr + 2) = 'R';
    *(arr + 3) = 'K';

    arr = realloc(arr, sizeof(int) * 5);

    printf("array value:\t");
    printf("%c\t", arr[0]);
    printf("%c\t", arr[1]);
    printf("%c\t", arr[2]);
    printf("%c\t", arr[3]);

    free(arr);
    arr = NULL;

    return 0;

}