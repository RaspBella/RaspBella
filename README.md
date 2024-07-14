```c
#include <stddef.h>

struct person {
    char *name;
    unsigned int age;
    char **pronouns;
    char **favourite_languages;
    struct {
        char *OS;
        char *DE;
        char *browser;
        char *search_engine;
        char *EDITOR;
    } software_preferences;
};

int main(void) {
    struct person bella = {
        .name = "Bella Campbell",
        .age = 18,
        .pronouns = (char*[]){"she", "her", "they", "them", NULL},
        .favourite_languages = (char*[]){"C", NULL},
        .software_preferences = {
            .OS = "Gentoo Linux",
            .DE = "Hyprland",
            .browser = "Firefox",
            .search_engine = "Ecosia",
            .EDITOR = "NeoVim"
        }
    };
}
```
# Above inspired by [Voklen](https://github.com/Voklen/Voklen)'s README.md
