/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-12-02 - 10:24 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: strcpy
 */

char *stu_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return dest;
}
