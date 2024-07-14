# READ ME
Hey I'm Bella and I am bold enough to (in the past) install triple boot Arch Linux, Gentoo Linux, and Linux From Scratch, I daily drive Arch and am more comfotable with Gentoo now after using it on a laptop aswell to "get outta my room". On the LFS note I do not have it installed now but recently I have started and haven't yet got to the real tricky stuff yet(I now use LUKS and LVM)
-
I was inspired by Alex's([Voklen/Voklen](https://github.com/Voklen/Voklen)) "about self code" and am making something similar

```python
class OS():
    def __init__(self, DE, browser, IDE):
        self.DE = DE
        self.browser = browser
        self.IDE = IDE

class Computer():
    def __init__(self, OS):
        self.OS = OS            

class Programmer():
    def __init__(self, name, age, pronouns, favourite_languages, desktop, laptop):
        self.name =  name
        self.age = age
        self.pronouns = pronouns
        self.favourite_languages = favourite_languages
        self.desktop = desktop
        self.laptop = laptop

Me = Programmer(
    "Bella Campbell",
    17,
    ["She", "They"],
    ["C", "Python"],
    Computer(
        {
            "Arch":OS("Awesome", "Firefox/Qutebrowser", "NeoVim"),
            "Gentoo":OS("None", "None", "NeoVim"),
            "LFS":OS("None", "None", "Vim")
        }
    ),
    Computer(
        {
            "Arch":OS("Awesome", "Qutebrowser", "Code - OSS"),
            "Gentoo":OS("Awesome", "Qutebrowser", "NeoVim")
        }
    )
)
```

<!---
RaspBella/RaspBella is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
