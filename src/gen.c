#include <stdlib.h>
#include <stdio.h>
#include "user.h"

#define FILENAME "docs/index.html"

extern struct person me;

int main(void) {
  FILE *fp = fopen(FILENAME, "w");

  if (!fp) {
    perror("Can't open: "FILENAME"\n");

    exit(EXIT_FAILURE);
  }

  fprintf(
    fp,
    "<!DOCTYPE html>"
    "<html lang=\"en\">"
    "<head>"
    "<title>about - RaspBella</title>"
    "<link rel=\"stylesheet\" href=\"/main.css\">"
    "<meta charset=\"UTF-8\">"
    "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
    "<link rel=\"apple-touch-icon\" sizes=\"180x180\" href=\"/favicon/apple-touch-icon.png\">"
    "<link rel=\"icon\" type=\"image/png\" sizes=\"32x32\" href=\"/favicon/favicon-32x32.png\">"
    "<link rel=\"icon\" type=\"image/png\" sizes=\"16x16\" href=\"/favicon/favicon-16x16.png\">"
    "<link rel=\"manifest\" href=\"/favicon/site.webmanifest\">"
    "</head>"
    "<body>"
    "<ul class=\"nav\">"
    "<li><a href=\"/\">home</a></li>"
    "<li><a class=\"active\" href=\"/RaspBella\">about</a></li>"
    "<li><a href=\"/cubing\">cubing</a></li>"
    "<li><a href=\"/linux\">linux</a></li>"
    "<li><a href=\"/media\">media</a></li>"
    "<li><a href=\"/trans\">transportation</a></li>"
    "<li><a href=\"/blog\">blog</a></li>"
    "</ul>"
    "<div id=\"me\">"
    "<h2>Me</h2>"
    "<p>Hi my name is %s",
    me.name
  );

  if (me.pronouns && me.pronouns[0]) {
    fprintf(fp, " (%s", me.pronouns[0]);

    for (int i = 1; me.pronouns[i]; ++i) {
      fprintf(fp, "/%s", me.pronouns[i]);
    }

    fprintf(fp, ")");
  }
  
  fprintf(
    fp,
    "</p><p>I'm %uyrs old</p>",
    me.age
  );

  if (me.likes && me.likes[0]) {
    fprintf(fp, "<p>I like %s", me.likes[0]);

    for (int i = 1; me.likes[i]; ++i) {
      fprintf(fp, ", %s", me.likes[i]);
    }

    fprintf(fp, "</p>");
  }

  if (me.computers && me.computers[0]) {
    fprintf(fp, "<label>computers:</label><ul><li>%s</li>", me.computers[0]);

    for (int i = 1; me.computers[i]; ++i) {
      fprintf(fp, "<li>%s</li>", me.computers[i]);
    }

    fprintf(fp, "</ul>");
  }

  if (me.software && me.software[0]) {
    fprintf(fp, "<label>software:</label><ul><li>%s</li>", me.software[0]);

    for (int i = 1; me.software[i]; ++i) {
      fprintf(fp, "<li>%s</li>", me.software[i]);
    }

    fprintf(fp, "</ul>");
  }

  fprintf(
    fp,
    "</div>"
    "</body>"
    "</html>"
  );

  fclose(fp);

  exit(EXIT_SUCCESS);
}
