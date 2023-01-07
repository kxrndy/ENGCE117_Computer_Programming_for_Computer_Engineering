#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** getStrings()
{
    char** strings = malloc(2 * sizeof(char*));
    strings[0] = malloc(15 * sizeof(char));
    strings[1] = malloc(15 * sizeof(char));

    strcpy(strings[0], "Hello, world!");
    strcpy(strings[1], "Foo bar baz");

    return strings;
}

int main()
{
    char** strings = getStrings();
    printf("String 1: %s\n", strings[0]);
    printf("String 2: %s\n", strings[1]);

    free(strings[0]);
    free(strings[1]);
    free(strings);

    return 0;
}
