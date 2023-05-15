#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define STR_LIST(...)((char*[]){__VA_ARGS__, NULL})

typedef struct
{
    char** values;
    size_t size;
}
str_list;

typedef struct sp
{
    char* OS;
    char* DE;
    char* browser;
    char* IDE;
    void (*print)(struct sp* sp);
    void (*destroy)(struct sp* sp);
}
software_preferences;

void print_software_preferences(software_preferences* sp)
{
    printf("My software stack:\n\tOperating System: %s\n\tDesktop Environment: %s\n\tBrowser: %s\n\tIntegrated Development Environment: %s\n", sp->OS, sp->DE, sp->browser, sp->IDE);
}

void destroy_software_preferences(software_preferences* sp)
{
    free(sp->OS);
    free(sp->DE);
    free(sp->browser);
    free(sp->IDE);
    free(sp);
}

software_preferences* create_software_preferences(char* OS, char* DE, char* browser, char* IDE, void (*print)(software_preferences* sp), void (*destroy)(software_preferences* sp))
{
    software_preferences* sp = malloc(sizeof(software_preferences));

    sp->OS = strdup(OS);
    sp->DE = strdup(DE);
    sp->browser = strdup(browser);
    sp->IDE = strdup(IDE);

    sp->print = print;
    sp->destroy = destroy;

    return sp;
}

typedef struct programmer
{
    char* name;
    str_list pronouns;
    uint8_t age;
    str_list favourite_languages;
    software_preferences* software_preferences;
    void (*print)(struct programmer* p);
    void (*destroy)(struct programmer* p);
}
programmer;

void print_programmer(programmer* p)
{
    printf("Hello I'm %s, %u and use ", p->name, p->age);
    for (size_t i = 0; i < p->pronouns.size; i++)
    {
        printf("%s", p->pronouns.values[i]);
        if (i != p->pronouns.size - 1) printf("/");
    }
    printf(" pronouns\nI'm a programmer and my favourite language");
    if (p->favourite_languages.size > 1)
    {
        printf("'s are ");
        for (size_t i = 0; i < p->favourite_languages.size; i++)
        {
            printf("%s", p->favourite_languages.values[i]);
            if (i != p->favourite_languages.size - 1) printf(", ");
        }
        printf("\n");
    }
    else
    {
        printf(" is %s\n", p->favourite_languages.values[0]);
    }
    p->software_preferences->print(p->software_preferences);
}

void destroy_programmer(programmer* p)
{
    free(p->name);
    for (size_t i = 0; i < p->pronouns.size; i++) free(p->pronouns.values[i]);
    free(p->pronouns.values);
    for (size_t i = 0; i < p->favourite_languages.size; i++) free(p->favourite_languages.values[i]);
    free(p->favourite_languages.values);
    p->software_preferences->destroy(p->software_preferences);
    free(p);
}

programmer* create_programmer(char* name, char** pronouns, uint8_t age, char** fave_langs, software_preferences* sp, void (*print)(programmer* p), void (*destroy)(programmer* p))
{
    programmer* p = malloc(sizeof(programmer));

    p->name = strdup(name);

    p->pronouns.size = 0;
    while (pronouns[p->pronouns.size] != NULL) p->pronouns.size++;
    p->pronouns.values = (char**)malloc(p->pronouns.size * sizeof(char*));
    for (size_t i = 0; i < p->pronouns.size; i++) p->pronouns.values[i] = strdup(pronouns[i]);
    
    p->age = age;

    p->favourite_languages.size = 0;
    while (fave_langs[p->favourite_languages.size] != NULL) p->favourite_languages.size++;
    p->favourite_languages.values = (char**)malloc(p->favourite_languages.size * sizeof(char*));
    for (size_t i = 0; i < p->favourite_languages.size; i++) p->favourite_languages.values[i] = strdup(fave_langs[i]);

    p->software_preferences = sp;

    p->print = print;
    p->destroy = destroy;

    return p;
}

int main()
{
    programmer* bella = create_programmer(
        "Bella",
        STR_LIST
        (
            "She",
            "Her",
            "They",
            "Them"
        ),
        18,
        STR_LIST
        (
            "C"
        ),
        create_software_preferences(
            "Gentoo Linux",
            "Awesome",
            "Firefox",
            "VSCodium",
            print_software_preferences,
            destroy_software_preferences
        ),
        print_programmer,
        destroy_programmer
    );

    bella->print(bella);

    bella->destroy(bella);
}
