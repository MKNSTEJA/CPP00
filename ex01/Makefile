NAME        := phonebook
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++14
OBJDIR      := obj

SRCS        := main.cpp phonebook.cpp contacts.cpp
OBJS        := $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
