/*
 * E89 Pedagogical & Technical Lab
 * project:     2022_rev_git/
 * created on:  Wed May 17 20:00:32 2023
 * 1st author:  user
 * description: reverse_pos_buf.c
*/


int pos_buf(char *buf, int l)
{
    int k;

    k = 0;
    while (buf[l + k] != '\n' && buf[l + k] != '\0') {
        k += 1;
    }
    return k;
}