# READ ME
Using Gentoo Gnu/Linux, done LFS twice✌️.
-
I was inspired by Alex's([Voklen/Voklen](https://github.com/Voklen/Voklen)) "about self code" and am making something similar

```python
class Person():
    def __init__(self, name, pronouns, age):
        self.__name = name
        self.__pronouns = pronouns
    
    def __repr__(self):
        return f"""Hello I'm {self.__name} and use {"/".join(self.__pronouns)} pronouns"""

class Programmer(Person):
    def __init__(self, name, pronouns, age, favourite_languages, software_preferences):
        super().__init__(name, pronouns, age)
        self.__favourite_languages = favourite_languages
        self.__software_preferences = software_preferences
    
    def __repr__(self):
        return super().__repr__() + f"""
I'm a programmer and my favourite language{"'s are "+", ".join(self.__favourite_languages[:-1])+f", and {self.__favourite_languages[-1]}" if len(self.__favourite_languages)>1 else f" is {self.__favourite_languages[0]}"}
{self.__software_preferences}"""

class Software_preferences():
    def __init__(self, OS, DE, browser, IDE):
        self.__OS = OS
        self.__DE = DE
        self.__browser = browser
        self.__IDE = IDE
    
    def __repr__(self):
        return f"""My software stack:
    Operating System: {self.__OS}
    Desktop Environment: {self.__DE}
    Browser: {self.__browser}
    Integrated Development Environment: {self.__IDE}"""

Me = Programmer(
    "Bella",
    ["They", "She"],
    17,
    ["Python", "C++", "Rust"],
    Software_preferences("Gentoo Linux", "Awesome", "Firefox", "VSCodium")
)

print(Me)
```

<!---
RaspBella/RaspBella is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
