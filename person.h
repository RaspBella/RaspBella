#pragma once

#include <stdio.h>
#include <stddef.h>
#include "software.h"

#ifndef _Nullable
#define _Nullable
#endif

#define typed_array(type, ...) (type) { __VA_ARGS__ }
#define str_list(...) typed_array(char*[], __VA_ARGS__, NULL)

typedef struct person {
    char *_Nullable name;
    unsigned age;
    char **_Nullable pronouns;
    char **_Nullable fave_langs;
    Software *_Nullable software;
} Person;

void print_person(Person *person) {
    if (person->name) {
	printf("%s (", person->name);
    } else {
	printf("[no name] (");
    }

    if (person->pronouns) {
	printf("%s", *person->pronouns);

	for (int i = 1; person->pronouns[i] != NULL; i++) {
	    printf("/%s", person->pronouns[i]);
	}
    } else {
	printf(
	    "\"Unlike you blue-haired liberals, "
	    "I don't have pronouns.\" "
	    "- Shadow The Hedgehog "
	    ": `https://www.youtube.com/watch?v=md8nInMGhFY`"
	);
    }

    printf(") %u years old\n", person->age);

    if (person->fave_langs) {
	printf("Favourite programming languages: %s", *person->fave_langs);

	for (int i = 1; person->fave_langs[i] != NULL; i++) {
	    printf(", %s", person->fave_langs[i]);
	}

	printf("\n");
    }

    if (person->software) {
	printf(
	    "Software:\n"
	    "\tOS: %s\n"
	    "\tDE: %s\n"
	    "\tBrowser: %s\n"
	    "\tEditor: %s\n",
	    person->software->OS,
	    person->software->DE,
	    person->software->browser,
	    person->software->editor
	);
    }
}
