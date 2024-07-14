# READ ME
Tripleboot Arch, Gentoo, LFS haver if you count booting LFS in a VM because I use LUKS and LVM on my NVME drive, This is because I would need an initrd/intramfs and that is not in the scope of LFS.
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
