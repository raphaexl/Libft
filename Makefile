# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebatchas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/31 09:48:11 by ebatchas          #+#    #+#              #
#    Updated: 2019/08/13 13:54:34 by ebatchas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

SRCDIR=srcs
HEADDIR=includes
LIBDIR=libs
BINDIR=.

CFLAGS=-I$(HEADDIR) -Wall -Wextra -Werror
LDFLAGS=$(CFLAGS) -L$(LIBDIR) -lft

SRC=$(SRCDIR)/main.c

OBJ=$(LIBDIR)/main.o

NAME = tree

all : $(NAME)
$(NAME) : $(OBJ)
	@make -C $(LIBDIR)/libft/ fclean && make -C $(LIBDIR)/libft
	@cp $(LIBDIR)/libft/libft.a $(LIBDIR)/
	@$(CC) $(LDFLAGS) -o $@ $^

$(LIBDIR)/%.o:$(HEADDIR)/%.h

$(LIBDIR)/%.o:$(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -o $@ -c $<
	@echo "DONE"

.PHONY: clean fclean

clean:
	@rm -rf $(LIBDIR)/*.o
	@make -C $(LIBDIR)/libft clean

fclean:clean
	@rm -rf $(NAME)
	@make -C $(LIBDIR)/libft fclean
re: fclean all
