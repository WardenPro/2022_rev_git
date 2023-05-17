/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-12-02 - 10:23 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: strcat
 */

#include "stu.h"

char *stu_strcat(char *dest, const char *src)
{
    int size;

    size = stu_strlen(dest);
    return stu_strcpy(&dest[size], src);
}
