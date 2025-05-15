SERVER = server
CLIENT = client

SERVER_SRCS = server.c
CLIENTE_SRCS = client.c
SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENTE_OBJS = $(CLIENTE_SRCS:.c=.o)

LIBFT_PATH = Libft

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -I$(LIBFT_PATH)

LIBFT = $(LIBFT_PATH)/libft.a

all: $(LIBFT) $(SERVER) $(CLIENT)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(@)

$(SERVER): $(SERVER_OBJS)
	$(CC) $(CFLAGS) $(SERVER_OBJS) -o $(SERVER) -L$(LIBFT_PATH) -lft

$(CLIENT): $(CLIENTE_OBJS)
	$(CC) $(CFLAGS) $(CLIENTE_OBJS) -o $(CLIENT) -L$(LIBFT_PATH) -lft

$(LIBFT):
	
	@echo " [ .. ] | Compiling.."
	@make -s -C $(LIBFT_PATH)
	@echo " [ OK ] | Ready!"

clean:
	@$(RM) $(SERVER_OBJS) $(CLIENTE_OBJS)
	@$(MAKE) -C $(LIBFT_PATH) -s clean

fclean: clean
	@$(RM) $(SERVER) $(CLIENT)
	@$(MAKE) -C $(LIBFT_PATH) -s fclean 

re: fclean all

.PHONY: all clean fclean re