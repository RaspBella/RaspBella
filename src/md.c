#include <stdio.h>
#include "user.h"

extern struct user RaspBella;

int main(void) {
  FILE *fp = fopen("../README.md", "w");

  fprintf(
    fp,
    "```c\n"
    "char *name = \"%s\";\n"
    "unsigned age = %u;\n"
    "char **pronouns = ",
    RaspBella.name,
    RaspBella.age
  );

  if (RaspBella.pronouns) {
    fprintf(fp, "{\n");

    for (int i = 0; RaspBella.pronouns[i] != NULL; i++) {
      fprintf(fp, "  \"%s\",\n", RaspBella.pronouns[i]);
    }

    fprintf(fp, "  NULL\n};\n");
  }

  else {
    fprintf(fp, "NULL;\n");
  }

  fprintf(fp, "```\n");

  fclose(fp);
}
