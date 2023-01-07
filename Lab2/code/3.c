#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void changeString(char str[])
{
    strcpy(str, "Changed string");
}

int main()
{
    char str[] = "Original string";
    printf("str before function call: %s\n", str);

    changeString(str);
    printf("str after function call: %s\n", str);

    return 0;
}
