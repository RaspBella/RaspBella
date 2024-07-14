import datetime

class Person():
    def __init__(self, name, pronouns, age):
        self.__name = name
        self.__pronouns = pronouns
        self.__age = age

    def __repr__(self):
        return f"""Hello I'm {self.__name}, {self.__age} and use {"/".join(self.__pronouns)} pronouns"""

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

class Programmer(Person):
    def __init__(self, name, pronouns, age, favourite_languages, software_preferences):
        super().__init__(name, pronouns, age)
        self.__favourite_languages = favourite_languages
        self.__software_preferences = software_preferences
    
    def __repr__(self):
        return super().__repr__() + f"""
I'm a programmer and my favourite language{"'s are "+", ".join(self.__favourite_languages[:-1])+f", and {self.__favourite_languages[-1]}" if len(self.__favourite_languages)>1 else f" is {self.__favourite_languages[0]}"}
{self.__software_preferences}"""

Me = Programmer(
    "Bella",
    ["She", "Her", "They", "Them"],
    (datetime.datetime.now() - datetime.datetime(2005, 4, 8, 6, 23)).days//365,
    ["C", "C++", "Python", "Rust"],
    So0ftware_preferences("Gentoo Linux", "Awesome", "Firefox", "VSCodium")
)

print(Me)