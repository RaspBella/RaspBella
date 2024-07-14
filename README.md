# READ ME
Using Gentoo Gnu/Linux, done LFS twice✌️.
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
    def __init__(self, name, age, pronouns, favourite_languages, desktop, laptops):
        self.name =  name
        self.age = age
        self.pronouns = pronouns
        self.favourite_languages = favourite_languages
        self.desktop = desktop
        self.laptops = laptops

Me = Programmer(
    "Bella Campbell",
    17,
    ["They", "She"],
    ["C", "Python"],
    Computer(
        {
            "Gentoo":OS("Awesome", "Firefox", "NeoVim")
        }
    ),
    [
    Computer(
        {
            "Arch":OS("Awesome", "Qutebrowser", "Code - OSS")
        }
    ),
"""
    Computer(
        {
            "Debian":OS("Plasma", "Firefox", "NeoVim") #Christmas laptop in near future
        }
"""
    ]
)
# Gonna re-write this code soon because I think I'm better with OOP now.
```

<!---
RaspBella/RaspBella is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
