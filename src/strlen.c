/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-10-27 - 17:41 +0200
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: strlen
 */

#include "stu.h"

unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
