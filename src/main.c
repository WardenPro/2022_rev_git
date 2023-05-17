/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 09:37 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: main fonction
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "stu.h"

static int readforrev()
{
    char *buf2;
    int b;
    char *buffer;
    char *buf3;

    buf2 = malloc(sizeof(char) * 100);
    if (!buf2) {
        return (-1);
    }
    b = 1;
    buf3 = malloc(sizeof(char) * 100);
    while (b > 0) {
        b = read(0, buf2, 1);
        buf2[b] = '\0';
        buffer = stu_strdupcat(buf3, buf2);
        free(buf3);
        buf3 = stu_strdup(buffer);
        free(buffer);
    }
    free(buf2);
    reverse(buf3);
    free(buf3);
    return 0;
}

int main(void)
{
    // struct reverse *rev;
    readforrev();
    return (0);
}