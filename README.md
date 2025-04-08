```bella.c
#include "person.h"

int main(void) {
    Person bella = {
	.name = "Bella",
	.age = 20,
	.pronouns = str_list("she", "her"),
	.fave_langs = str_list("c", "python"),
	.software = &(Software){
	    .OS = "Gentoo Linux",
	    .DE = "Hyprland",
	    .browser = "Firefox",
	    .editor = "Neovim"
	}
    };

    print_person(&bella);
}
```
# above inspired by [Voklen](https://github.com/Voklen/Voklen)'s README.md
