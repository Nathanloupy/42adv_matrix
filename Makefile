# Makefile for Matrix

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

MAKEFLAGS += --no-print-directory

NAME = matrix

INCLUDES = -I./includes/ -I./includes/class/ -I./includes/class/matrix/ -I./includes/class/vector/ -I./includes/class/complex/

SRCS_MAIN = srcs/main.cpp \
			srcs/display.cpp
SRCS_CLASS = srcs/class/Complex.cpp
SRCS_TESTS = srcs/tests/base_tests.cpp \
			srcs/tests/ex00_tests.cpp \
			srcs/tests/ex01_tests.cpp \
			srcs/tests/ex02_tests.cpp \
			srcs/tests/ex03_tests.cpp \
			srcs/tests/ex04_tests.cpp \
			srcs/tests/ex05_tests.cpp \
			srcs/tests/ex06_tests.cpp \
			srcs/tests/ex07_tests.cpp \
			srcs/tests/ex08_tests.cpp \
			srcs/tests/ex09_tests.cpp \
			srcs/tests/ex10_tests.cpp \
			srcs/tests/ex11_tests.cpp \
			srcs/tests/ex12_tests.cpp \
			srcs/tests/ex13_tests.cpp \
			srcs/tests/ex15_tests.cpp

OBJS_MAIN = $(SRCS_MAIN:.cpp=.o)
OBJS_CLASS = $(SRCS_CLASS:.cpp=.o)
OBJS_TESTS = $(SRCS_TESTS:.cpp=.o)

OBJS = $(OBJS_MAIN) $(OBJS_CLASS) $(OBJS_TESTS)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

re_run:
	@clear && clear
	@make re
	@./$(NAME) $(test)

run:
	@clear && clear
	@make
	@./$(NAME) $(test)

.PHONY: all clean fclean re re_run