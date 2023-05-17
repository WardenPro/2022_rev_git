/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-23 - 13:49 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: dupcat
 */

#include <stdlib.h>
#include <unistd.h>

#include "stu.h"

char *stu_strdupcat(const char *a, const char *b)
{
    int i;
    char *tmp;

    i = stu_strlen(a) + stu_strlen(b);
    tmp = malloc(sizeof(char) * i + 1);
    stu_strcpy(tmp, a);
    stu_strcat(tmp, b);
    tmp[i] = '\0';
    return tmp;
}
