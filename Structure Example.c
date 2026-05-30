#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s1 = {1, "Nanda"};

    printf("%d %s", s1.id, s1.name);
}
