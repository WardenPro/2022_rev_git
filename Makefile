# E89 Pedagogical & Technical Lab
# project:     rev
# created on:  2022-11-22 - 09:38 +0100
# 1st author:  maxence.lenoble - maxence.lenoble
# description: Makefile

NAME	=	rev

SRCS	=	src/main.c		\
		src/reverse.c		\
		src/strlen.c		\
		src/strcpy.c		\
		src/strcat.c		\
		src/dupcat.c		\
		src/strdup.c		\
		src/reverse_pos_buf.c	\
		src/reverse_withoutn.c	

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

save:
	git status
	git add src/*.c include/*.h Makefile
	git commit -m "$(NAME) save"
	git push

exe:
	make re
	./rev
	make fclean

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
