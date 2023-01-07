#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

int main() {
    struct Person person1;
    strcpy(person1.name, "John Smith");
    person1.age = 30;

    struct Person* personPtr = &person1;

    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);

    return 0;
}