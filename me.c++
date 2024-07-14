#include <iostream>
#include <vector>

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

        void display()
        {
            cout << "Hello I'm " + name + ", " << age << " and use " + pronouns[0];
            for (int i=1; i<pronouns.size(); i++)
            {
                cout << "/" + pronouns[i];
            }
            cout << " pronouns";
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

        void display()
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

        void display()
        {
            Person::display();
            cout << endl << "I'm a programmer and my favourite language"
                 << (favourite_languages.size() == 1 ? " is " : "'s are ")
                 << favourite_languages[0];
            for (int i=1; i<favourite_languages.size(); i++)
            {
                cout << ", " << (i == favourite_languages.size() - 1 ? "and " : "") + favourite_languages[i];
            }
            cout << endl;
            software_preferences.display();
        }
};

int main()
{
    Programmer Me(
        "Bella",
        {"They", "She"},
        17,
        {"C++", "Python", "Rust"},
        Software_preferences(
            "Gentoo Linux",
            "Awesome",
            "Firefox",
            "NeoVim"
        )
    );

    Me.display();

    return 0;
}
