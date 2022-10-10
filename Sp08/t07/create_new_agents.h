#pragma once

#include "stdio.h"
#include "stdlib.h"
#include "agent.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strenght, int count);
t_agent *mx_create_agent(char *name, int power, int strenght);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strnew(const char size);
int mx_strlen(const char *s);

