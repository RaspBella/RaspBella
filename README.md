```
struct software {
    char *OS;
    char *DE;
    char *browser;
    char *editor;
};

struct person {
    char *name;
    unsigned age;
    char **pronouns;
    char **fave_langs;
    struct software software;
};

int main(void) {
    struct person bella = {
	.name = "Bella",
	.age = 19,
	.pronouns = (char*[]) { "she", "her", "they", "them", 0 },
	.fave_langs = (char*[]) { "c", 0 },
	.software = {
	    .OS = "Gentoo Linux",
	    .DE = "Hyprland",
	    .browser = "Firefox",
	    .editor = "NeoVim"
	}
    };
}
```
# Above inspired by [Voklen](https://github.com/Voklen/Voklen)'s README.md
