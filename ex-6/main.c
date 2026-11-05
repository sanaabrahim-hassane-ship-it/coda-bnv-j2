#include <stdlib.h>
#include <stdio.h>

int main()
{
    char first_name[100];
    int age;
    int year;
    int old_year;
    printf("Bonjour, quel est votre prénom ?\n");
    scanf("%s", first_name);
    printf("Bonjour %s, quel est votre âge?\n", first_name);
    scanf("%d", &age);

    year = 2026 - age;
    old_year = year - 1;
    printf("%s, si vous êtes de la fin d'année votre année de naissance est %d sinon c'est %d\n", first_name, old_year, year);
    exit(0);
}