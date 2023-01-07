#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

int main() {
    struct Person person1;
    strcpy(person1.name, "John Smith");
    person1.age = 30;

    printPerson(person1);

    return 0;
}