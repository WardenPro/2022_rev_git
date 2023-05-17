/*
 * E89 Pedagogical & Technical Lab
 * project:     2022_rev_git/
 * created on:  Wed May 17 20:00:32 2023
 * 1st author:  user
 * description: reverse_withoutn.c
*/

#include <unistd.h>

void writewithoutn(int k, int l, char *buf)
{
    while (l + k >= l) {
        if (buf[l + k] != '\n') {
            write(1, &buf[k + l], 1);
        }
        k -= 1;
    }
}