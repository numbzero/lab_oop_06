CC = g++

CCFLAGS = -g -Wall -Wextra -Werror

CLEAN = rm

CLEAN_FLAGS = -f

SRC = main.cpp \
	  constructors.cpp \
	  destructor.cpp \
	  show_array.cpp \
	  init.cpp \
	  merge_sort.cpp \
	  merge.cpp \
	  min.cpp

OBJ = main.o \
	  constructors.o \
	  destructor.o \
	  show_array.o \
	  init.o \
	  merge_sort.o \
	  merge.o \
	  min.o

NAME = test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $^ -o $@

$(OBJ): $(SRC)
	$(CC) $(CCFLAGS) -c $^

re: fclean all

clean:
	$(CLEAN) $(CLEAN_FLAGS) $(OBJ)
	$(CLEAN) $(CLEAN_FLAGS) *~

fclean: clean
	$(CLEAN) $(CLEAN_FLAGS) $(NAME)
