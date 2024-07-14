#include <iostream>
#include <vector>
#include "headers/join.hpp"

using namespace std;

class Person
{
    private:
        string name;
        vector<string> pronouns;
        unsigned int age;

    public:
        Person(string name, vector<string> pronouns, unsigned int age)
        {
            this->name = name;
            this->pronouns = pronouns;
            this->age = age;
        }

        void print()
        {
            cout << "Hello I'm " + name + ", " << age << " and use " + join(pronouns, "/");
        }
};

class Software_preferences
{
    private:
        string OS;
        string DE;
        string browser;
        string IDE;

    public:
        Software_preferences(string OS, string DE, string browser, string IDE)
        {
            this->OS = OS;
            this->DE = DE;
            this->browser = browser;
            this->IDE = IDE;
        }

        Software_preferences(){}

        void print()
        {
            cout << "My software stack:" << endl
                 << "\tOperating System: " + OS << endl
                 << "\tDesktop Environment: " + DE << endl
                 << "\tBrowser: " + browser << endl
                 << "\tIntegrated Development Environment: " + IDE;
        }
};

class Programmer : public Person
{
    private:
        vector<string> favourite_languages;
        Software_preferences software_preferences;

    public:
        Programmer(string name, vector<string> pronouns, int age, vector<string> favourite_languages, class Software_preferences software_preferences) : Person(name, pronouns, age)
        {
            this->favourite_languages = favourite_languages;
            this->software_preferences = software_preferences;
        }

        void print()
        {
            Person::print();
            cout << endl << "I'm a programmer and my favourite language"
                 << (favourite_languages.size() == 1 ? " is " : "'s are ")
                 << join(favourite_languages, ", ") << endl;
            software_preferences.print();
        }
};

int main()
{
    Programmer Me(
        "Bella",
        {"She", "Her", "They", "Them"},
        17,
        {"C", "C++", "Python", "Rust"},
        Software_preferences(
            "Gentoo Linux",
            "Awesome",
            "Firefox",
            "NeoVim"
        )
    );

    Me.print();

    return 0;
}
