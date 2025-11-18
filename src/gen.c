#include <stdio.h>
#include "user.h"

extern User RaspBella;

int main(void) {
  FILE *fp = fopen("../docs/index.html", "w");

  fprintf(fp,
    "<!DOCTYPE html>\n"
    "<html lang=\"en\">\n"
    "  <head>\n"
    "    <title>about - RaspBella</title>\n"
    "    <link rel=\"stylesheet\" href=\"/main.css\">\n"
    "    <meta charset=\"UTF-8\">\n"
    "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
    "\n"
    "    <link rel=\"apple-touch-icon\" sizes=\"180x180\" href=\"/favicon/apple-touch-icon.png\">\n"
    "    <link rel=\"icon\" type=\"image/png\" sizes=\"32x32\" href=\"/favicon/favicon-32x32.png\">\n"
    "    <link rel=\"icon\" type=\"image/png\" sizes=\"16x16\" href=\"/favicon/favicon-16x16.png\">\n"
    "    <link rel=\"manifest\" href=\"/favicon/site.webmanifest\">\n"
    "  </head>\n"
    "  <body>\n"
    "    <ul class=\"nav\">\n"
    "      <li><a href=\"/\">home</a></li>\n"
    "      <li><a class=\"active\" href=\"/RaspBella\">about</a></li>\n"
    "      <li><a href=\"/cubing\">cubing</a></li>\n"
    "      <li><a href=\"/linux\">linux</a></li>\n"
    "      <li><a href=\"/media\">media</a></li>\n"
    "      <li><a href=\"/trans\">transportation</a></li>\n"
    "    </ul>\n"
    "    <div id=\"me\">\n"
    "      <h2>Me</h2>\n"
    "      <p>\n"
    "        Hi my name is %s",
    RaspBella.name
  );

  if (RaspBella.pronouns) {
    fprintf(fp, " (%s",
      RaspBella.pronouns[0]
    );

    for (int i = 1; RaspBella.pronouns[i] != NULL; i++) {
      fprintf(fp, "/%s",
        RaspBella.pronouns[i]
      );
    }

    fprintf(fp, ")\n");
  }

  fprintf(fp,
    "        <br>\n"
    "        I'm %uyrs old\n",
    RaspBella.age
  );

  if (RaspBella.hobbies) {
    fprintf(fp,
      "        <br>\n"
      "        I like <a href=\"%s\">%s</a>",
      RaspBella.hobbies[0].link,
      RaspBella.hobbies[0].name
    );

    for (int i = 1; RaspBella.hobbies[i].name != NULL; i++) {
      fprintf(fp, ", <a href=\"%s\">%s</a>",
        RaspBella.hobbies[i].link,
        RaspBella.hobbies[i].name
      );
    }

    fprintf(fp, "\n");
  }

  if (RaspBella.fave_langs) {
    fprintf(fp,
      "        <br>\n"
      "        My favourite programming languages: %s",
      RaspBella.fave_langs[0]
    );

    for (int i = 1; RaspBella.fave_langs[i] != NULL; i++) {
      fprintf(fp, ", %s",
        RaspBella.fave_langs[i]
      );
    }

    fprintf(fp, "\n");
  }

  fprintf(fp,
    "      </p>\n"
    "    </div>\n"
    "    <div id=\"hardware\">\n"
    "      <h3>My pc harware</h3>\n"
    "      <ul>\n"
    "        <li>%s</li>\n"
    "        <li>%uG DDR%u %uMHZ</li>\n",
    RaspBella.hardware.cpu,
    RaspBella.hardware.ram.gb,
    RaspBella.hardware.ram.ddr,
    RaspBella.hardware.ram.mhz
  );

  if (RaspBella.hardware.drives) {
    for (int i = 0; RaspBella.hardware.drives[i].name != NULL; i++) {
      fprintf(fp, "        <li>%s - %uGB</li>\n",
        RaspBella.hardware.drives[i].name,
        RaspBella.hardware.drives[i].gb
      );
    }
  }

  if (RaspBella.hardware.monitors) {
    for (int i = 0; RaspBella.hardware.monitors[i].name != NULL; i++) {
      fprintf(fp, "        <li>%s: %ux%u@%u</li>\n",
        RaspBella.hardware.monitors[i].name,
        RaspBella.hardware.monitors[i].pixels.width,
        RaspBella.hardware.monitors[i].pixels.height,
        RaspBella.hardware.monitors[i].hz
      );
    }
  }

  fprintf(fp,
    "      </ul>\n"
    "    </div>\n"
    "    <div id=\"software\">\n"
    "      <h3>Software I use</h3>\n"
    "      <ul>\n"
    "        <li>OS: %s</li>\n"
    "        <li>WM: %s</li>\n"
    "        <li>Browser: %s</li>\n"
    "        <li>Search engine: %s</li>\n"
    "        <li>Terminal: %s</li>\n"
    "        <li>Editor: %s</li>\n"
    "      </ul>\n"
    "    </div>\n"
    "  </body>\n"
    "</html>\n",
    RaspBella.software.OS,
    RaspBella.software.WM,
    RaspBella.software.browser,
    RaspBella.software.search_engine,
    RaspBella.software.terminal,
    RaspBella.software.editor
  );

  fp = freopen("../README.md", "w", fp);

  fclose(fp);
}
