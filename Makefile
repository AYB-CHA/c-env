NAME := env
CC := gcc
FILES := env.c
FLAGS := -Wall -Wextra -Werror
.PHONY: all
all: ${NAME}
${NAME}: ${FILES}
	${CC} ${FILES} -o $@ ${FLAGS}
clean:
	rm ${NAME} $(wildcard *.o)