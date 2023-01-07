#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
};

void incrementAge(struct Person* p) {
    p->age++;
}

int main() {
    struct Person person1;
    strcpy(person1.name, "John Smith");
    person1.age = 30;

    incrementAge(&person1);

    printf("%s is %d years old.\n", person1.name, person1.age);

    return 0;
}
