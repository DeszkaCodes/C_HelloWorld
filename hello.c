#include <stdio.h>

int main() {

    printf("What is your name?\n");

    char name[100];

    scanf("%s", &name);

    printf("Hello %s!", &name);

    return 0;
}