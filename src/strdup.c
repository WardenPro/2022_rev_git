/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-10-27 - 17:41 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: strdup
 */
#include <stdlib.h>

#include "stu.h"

char *stu_strdup(const char *str)
{
    int i = 0;
    char *test = malloc(sizeof(char) * stu_strlen(str) + 1);
    i = 0;
    while (str[i] != '\0') {
        test[i] = str[i];
        i = i + 1;
    }
    test[i] = '\0';
    return (test);
}
