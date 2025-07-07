#include <stdio.h>
#include <assert.h>
#include "user.h"

const char bella_c[] = {
#embed "bella.c"
};

const char t1[] = {
#embed "templates/1.html"
};

const char t2[] = {
#embed "templates/2.html"
};

const char t3[] = {
#embed "templates/3.html"
};

const char t4[] = {
#embed "templates/4.html"
};

extern User RaspBella;

int main(void) {
  // Write README.md
  FILE *readme = fopen("README.md", "w");

  fprintf(readme, "```bella.c\n");
  fwrite(bella_c, sizeof(bella_c), 1, readme);
  fprintf(readme, "```");

  fclose(readme);



  // Write index.html
  FILE *html = fopen("index.html", "w");

  fwrite(t1, sizeof(t1), 1, html);

  fprintf(html, "      <p>Hi my name is %s",
    RaspBella.name
  );

  if (RaspBella.pronouns) {
    fprintf(html, " (%s",
      RaspBella.pronouns[0]
    );

    for (int i = 1; RaspBella.pronouns[i] != NULL; i++) {
      fprintf(html, "/%s",
        RaspBella.pronouns[i]
      );
    }

    fprintf(html, ")\n");
  }

  fprintf(html, "      <br>I'm %uyrs old\n",
    RaspBella.age
  );

  if (RaspBella.fave_langs) {
    fprintf(html, "      <br>My favourite programming languages: %s",
      RaspBella.fave_langs[0]
    );

    for (int i = 1; RaspBella.fave_langs[i] != NULL; i++) {
      fprintf(html, ", %s",
        RaspBella.fave_langs[i]
      );
    }

    fprintf(html, "\n");
  }

  if (RaspBella.hobbies) {
    fprintf(html, "      <br>I like <a href=\"%s\">%s</a>",
      RaspBella.hobbies[0].link,
      RaspBella.hobbies[0].name
    );

    for (int i = 1; RaspBella.hobbies[i].name != NULL; i++) {
      fprintf(html, ", <a href=\"%s\">%s</a>",
        RaspBella.hobbies[i].link,
        RaspBella.hobbies[i].name
      );
    }

    fprintf(html, "\n");
  }

  fwrite(t2, sizeof(t2), 1, html);

  fprintf(html, "        <li>%s</li>\n",
    RaspBella.hardware.cpu
  );

  fprintf(html, "        <li>%uG DDR%u %uMHZ</li>\n",
    RaspBella.hardware.ram.gb,
    RaspBella.hardware.ram.ddr,
    RaspBella.hardware.ram.mhz
  );

  assert(RaspBella.hardware.drives);

  for (int i = 0; RaspBella.hardware.drives[i].name != NULL; i++) {
    fprintf(html, "        <li>%s - %uGB</li>\n",
      RaspBella.hardware.drives[i].name,
      RaspBella.hardware.drives[i].gb
    );
  }

  assert(RaspBella.hardware.monitors);

  for (int i = 0; RaspBella.hardware.monitors[i].name != NULL; i++) {
    fprintf(html, "        <li>%s: %ux%u@%u</li>\n",
      RaspBella.hardware.monitors[i].name,
      RaspBella.hardware.monitors[i].pixels.width,
      RaspBella.hardware.monitors[i].pixels.height,
      RaspBella.hardware.monitors[i].hz
    );
  }

  fwrite(t3, sizeof(t3), 1, html);

  fprintf(html, "        <li>OS: %s</li>\n",
    RaspBella.software.OS
  );

  fprintf(html, "        <li>WM: %s</li>\n",
    RaspBella.software.WM
  );

  fprintf(html, "        <li>Browser: %s</li>\n",
    RaspBella.software.browser
  );

  fprintf(html, "        <li>Search engine: %s</li>\n",
    RaspBella.software.search_engine
  );

  fprintf(html, "        <li>Terminal: %s</li>\n",
    RaspBella.software.terminal
  );

  fprintf(html, "        <li>Editor: %s</li>\n",
    RaspBella.software.editor
  );

  fwrite(t4, sizeof(t4), 1, html);

  fclose(html);
}
