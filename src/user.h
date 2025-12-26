#include <stddef.h>
#include <stdbool.h>

struct hobby {
  char *name;
  char *link;
};

struct drive {
  char *name;
  unsigned gb;
};

struct monitor {
  char *name;
  struct {
    unsigned width;
    unsigned height;
  } pixels;
  unsigned hz;
};

struct user {
  char *name;
  unsigned age;
  char **pronouns;
  struct hobby *hobbies;
  char **fave_langs;
  struct {
    char *cpu;
    bool igpu;
    char *gpu;
    struct {
      unsigned gb;
      unsigned ddr;
      unsigned mhz;
    } ram;
    struct drive *drives;
    struct monitor *monitors;
  } hardware;
  struct {
    char *OS;
    char *WM;
    char *browser;
    char *search_engine;
    char *terminal;
    char *editor;
  } software;
};
