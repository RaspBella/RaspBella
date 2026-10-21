#src/bella.c:
```c
#include "user.h"

struct person me = {
  .name = "Bella",
  .age = 21,
  .pronouns = list(
    "she",
    "it"
  ),
  .likes = list(
    link("cubing", "/cubing"),
    link("tech", github("RaspBella")),
    link("gaming", "/game")
  ),
  .computers = list(
    "mary",
    link("ivy", wikipedia("Ivy_Bridge_(microarchitecture)"))
  ),
  .software = list(
    link("Gentoo Linux", "https://www.gentoo.org/"),
    link("niri", "https://niri-wm.github.io/niri/"),
    link("kitty", "https://sw.kovidgoyal.net/kitty/"),
    link("neovim", "https://neovim.io/")
  )
};```
README.md inspired by [Voklen](https://github.com/Voklen)