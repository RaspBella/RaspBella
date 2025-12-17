#include <stdio.h>
#include "user.h"

extern struct user RaspBella;

int main(void) {
  FILE *fp = fopen("../README.md", "w");

  fprintf(
    fp,
    "```c\n"
    "char *name = \"%s\";\n"
    "unsigned age = %u;\n",
    RaspBella.name,
    RaspBella.age
  );

  if (RaspBella.pronouns) {
    fprintf(
      fp,
      "char *pronouns[] = {\n"
      "  \"%s\"",
      *RaspBella.pronouns
    );

    for (int i = 1; RaspBella.pronouns[i] != NULL; i++) {
      fprintf(fp, ",\n  \"%s\"", RaspBella.pronouns[i]);
    }

    fprintf(fp, "\n};\n");
  }

  else {
    fprintf(fp, "char **pronouns = NULL;\n");
  }

  fprintf(fp, "```\n");

  fclose(fp);
}
