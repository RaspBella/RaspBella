```c
#include <stdio.h>

struct software {
    char *OS;
    char *DE;
    char *browser;
    char *editor;
};

struct person {
    char *name;
    unsigned age;
    char **pronouns; // Can be NULL
    char **fave_langs; // Can also be NULL
    struct software *software; // can be NULL aswell
};

void print_person(struct person *person) {
    printf("%s (", person->name);

    if (person->pronouns == NULL) {
	printf("Unlike you blue-haired liberals, I don't have pronouns. (reference: https://www.youtube.com/watch?v=md8nInMGhFY)");
    } else {
	printf("%s", *person->pronouns);

	for (int i = 1; person->pronouns[i] != NULL; i++) {
	    printf("/%s", person->pronouns[i]);
	}
    }

    printf(") %uyrs old\n", person->age);

    if (person->fave_langs) {
	printf("Favourite programming languages: %s", *person->fave_langs);

	for (int i = 1; person->fave_langs[i] != NULL; i++) {
	    printf(", %s", person->fave_langs[i]);
	}
    }

    if (person->software) {
        printf("\nSoftware:\n\tOS: %s\n\tDesktop Environment/Window Manager: %s\n\tWeb Browser: %s\n\tText Editor: %s\n", person->software->OS, person->software->DE, person->software->browser, person->software->editor);
    }
}

int main(void) {
    struct person bella = {
        .name = "Bella",
        .age = 19,
        .pronouns = (char*[]){ "she", "her", NULL },
        .fave_langs = (char*[]){ "c", "python", NULL },
        .software = &(struct software){
            .OS = "Gentoo Linux",
            .DE = "Hyprland",
            .browser = "Firefox",
            .editor = "NeoVim"
        }
    };

    print_person(&bella);
}
```
# Above inspired by [Voklen](https://github.com/Voklen/Voklen)'s README.md
