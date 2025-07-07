#include <stddef.h>

typedef struct {
  char *name;
  char *link;
} hobby;

typedef struct {
  char *name;
  unsigned gb;
} drive;

typedef struct {
  unsigned width;
  unsigned height;
} pixels;

typedef struct {
  char *name;
  pixels pixels;
  unsigned hz;
} monitor;

#define typed_array(type, ...) (type) { __VA_ARGS__ }

#define null_term_list(type, ...) typed_array(type, __VA_ARGS__, NULL )

#define str_list(...) null_term_list(char*[], __VA_ARGS__)

#define drive_list(...) null_term_list(drive[], __VA_ARGS__)
#define drive(name, gb) (drive) { name, gb }

#define monitor_list(...) null_term_list(monitor[], __VA_ARGS__)
#define monitor(name, pixels, hz) (monitor) { name, pixels, hz }

#define pixels(width, height) (pixels) { width, height }

#define hobby_list(...) null_term_list(hobby[], __VA_ARGS__)
#define hobby(name, link) (hobby) { name, link }

typedef struct {
  char *name;
  unsigned age;
  char **pronouns;
  char **fave_langs;
  hobby *hobbies;
  struct {
    char *cpu;
    struct {
      unsigned gb;
      unsigned ddr;
      unsigned mhz;
    } ram;
    drive *drives;
    monitor *monitors;
  } hardware;
  struct {
    char *OS;
    char *WM;
    char *browser;
    char *search_engine;
    char *terminal;
    char *editor;
  } software;
} User;
