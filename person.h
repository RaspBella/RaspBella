#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define STR_LIST(...)((char*[]){__VA_ARGS__, NULL})

typedef struct str_list str_list;

typedef struct sp software_preferences;

typedef struct programmer programmer;

void print_software_preferences(software_preferences* sp);
void destroy_software_preferences(software_preferences* sp);
software_preferences* create_software_preferences(char* OS, char* DE, char* browser, char* IDE);
void print_programmer(programmer* p);
void destroy_programmer(programmer* p);
programmer* create_programmer(char* name, char** pronouns, uint8_t age, char** fave_langs, software_preferences* sp);
