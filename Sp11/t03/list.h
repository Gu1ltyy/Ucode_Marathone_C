#pragma once

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

typedef struct s_list {
    void *data;
    struct s_list *next;
}              t_list;

void mx_pop_back(t_list **list);

