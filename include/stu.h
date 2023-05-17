/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 09:38 +0100
 * 1st author:  maxence.lenoble - maxence.lenoble
 * description: stu.h
 */

#ifndef STU_SURFACE_H_
#define STU_SURFACE_H_

void reverse(char *buf);

char *alloc(void);

int main(void);

unsigned int stu_strlen(const char *str);

char *stu_strcat(char *dest, const char *src);

char *stu_strcpy(char *dest, const char *src);

char *stu_strdupcat(const char *a, const char *b);

char *stu_strdup(const char *str);

int pos_buf(char *buf, int l);

void writewithoutn(int k, int l, char *buf);

#endif  // STU_SURFACE_H_
