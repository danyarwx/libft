NAME = libft.a

SRCS := \
	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c  ft_striteri.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c  ft_substr.c \
	ft_tolower.c  ft_toupper.c

BONUS_SRCS := \
		ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 



OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: ${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY: all clean fclean re bonus



















# NAME := libft.a
# .DEFAULT_GOAL := all
# CC := cc
# AR := ar
# RM := rm -rf

# ################################################################################
# ###############                  DIRECTORIES                      ##############
# ################################################################################

# OBJ_DIR := _obj
# INC_DIRS := .
# SRC_DIRS := .

# # Tell the Makefile where headers and source files are
# vpath %.h $(INC_DIRS)
# vpath %.c $(SRC_DIRS)

# ################################################################################
# ###############                  SOURCE FILES                     ##############
# ################################################################################

# SRCS := ft_isalpha.c

# BONUS_SRCS :=

# SRCS += $(BONUS_SRCS)

# OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

# ################################################################################
# ########                         COMPILING                      ################
# ################################################################################

# # CFLAGS := -Wall -Wextra -Werror -g -MMD -MP -I$(INC_DIRS)
# CFLAGS := -Wall -Wextra -Werror -g -MMD -MP $(addprefix -I, $(INC_DIRS))
# LDFLAGS := -lncurses
# ARFLAGS := -rcs

# # ANSI color codes
# GREEN := \033[0;32m
# MAGENTA := \033[0;35m
# BOLD := \033[1m
# NC := \033[0m # Reset

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
# 	@echo "$(GREEN)$(BOLD)Successful Compilation$(NC)"

# # Rule to compile .o files
# $(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
# 	mkdir -p $(@D)
# 	$(CC) $(CFLAGS) -c $< -o $@

# # Ensure the directories exist
# $(OBJ_DIR):
# 	mkdir -p $(OBJ_DIR)

# clean:
# 	$(RM) $(OBJ_DIR)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# bonus: all

# -include $(OBJS:%.o=%.d)

# .PHONY: all clean fclean re bonus
