/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 09:41 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: reverse
 */

#include <stdlib.h>
#include <unistd.h>

#include "stu.h"

void reverse(char *buf)
{
    int k;
    int l;
    int m;

    l = 0;
    m = 0;
    while (buf[l] != '\0') {
        k = pos_buf(buf, l);
        m = k;
        writewithoutn(k, l, buf);
        l += m + 1;
        if (buf[l - 1] == '\n') {
            write(1, &buf[l - 1], 1);
        }
    }
}
