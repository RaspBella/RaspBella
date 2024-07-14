```
#include <stddef.h>

struct simple_list {
    size_t count;
    char **strings;
};

struct software_preferences {
    char *OS;
    char *DE;
    char *browser;
    char *search_engine;
    char *EDITOR;
};

struct person {
    char *name;
    unsigned int age;
    struct simple_list pronouns;
    struct simple_list fave_langs;
    struct software_preferences software_preferences;
};

int main(void) {
    struct person bella = {
        .name = "Bella Campbell",
        .age = 18,
        .pronouns = {
	    .count = 4,
	    .strings = (char*[]) {
		"she",
		"her",
		"they",
		"them"
	    }
	},
        .fave_langs = {
	    .count = 2,
	    .strings = (char*[]) {
		"C",
		"Python"
	    }
	},
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
