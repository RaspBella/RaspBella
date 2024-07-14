# C
```c
#include <stdint.h>
#include <stddef.h>

typedef struct
{
    char *name;
    uint8_t age;
    char **pronouns;
    char **favourite_languages;
    struct
    {
	    char *OS;
	    char *DE;
        char *browser;
        char **SEs;
    	char **IDEs;
    }
    software_preferences;
}
person;

int main()
{
    person bella = {
	    .name = "Bella Campbell",
        .age = 18,
        .pronouns = (char*[]){"she", "her", "they", "them", NULL},
        .favourite_languages = (char*[]){"C", "C++", "Python", "Ruby", "Lua", NULL},
	    .software_preferences = {
	        .OS = "Gentoo Linux",
	        .DE = "Awesome",
	        .browser = "Firefox",
            .SEs = (char*[]){"Ecosia", "LibreX", NULL},
	        .IDEs = (char*[]){"Neovim", "VSCodium", NULL}
	    }
    };
}
```
# Above inspired by [Voklen](https://github.com/Voklen/Voklen)'s README.md
