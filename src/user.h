#ifndef USER_H
#define USER_H

#include <stddef.h>

#define list(...) (char*[]){ __VA_ARGS__, NULL }

#define link(TEXT, HREF) "<a href=\""HREF"\">"TEXT"</a>"

#define github(PATH) "https://github.com/"PATH
#define wikipedia(ARTICLE) "https://en.wikipedia.org/wiki/"ARTICLE

struct person {
  char *name;
  unsigned age;
  char **pronouns;
  char **likes;
  char **computers;
  char **software;
};

#endif /* USER_H */
