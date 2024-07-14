class Person
  def initialize(name, pronouns, age)
    @name = name
    @pronouns = pronouns
    @age = age
  end

  def print
    puts "Hello I'm #{@name}, #{@age} and use #{@pronouns.join("/")}"
  end
end

class Software_preferences
  def initialize(os, de, browser, ide)
    @os = os
    @de = de
    @browser = browser
    @ide = ide
  end

  def print
    puts "My software stack:\n\tOperating System: #{@os}\n\tDesktop Environment: #{@de}\n\tBrowser: #{@browser}\n\tIntegrated Development Environment: #{@ide}"
  end
end

class Programmer < Person
  def initialize(name, pronouns, age, favourite_languages, software_preferences)
    super(name, pronouns, age)
    @favourite_languages = favourite_languages
    @software_preferences = software_preferences
  end

  def print
    super
    puts "I'm a programmer and my favourite language#{@favourite_languages.size == 1 ? " is" : "'s are"} #{@favourite_languages.join(", ")}"
    @software_preferences.print
  end
end

me = Programmer.new(
  "Bella",
  ["She", "Her", "They", "Them"],
  18,
  ["C", "C++", "Ruby", "Python", "Rust"],
  Software_preferences.new(
    "Gentoo Linux",
    "Awesome",
    "Firefox",
    "NeoVim"
  )
)
me.print