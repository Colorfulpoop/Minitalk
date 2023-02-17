CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/libft.a
FT_PRINTF = ./ft_printf/libftprintf.a
RM = rm -rf

SERVER = server
CLIENT = client

SV_SRCS = server.c
SV_OBJS = $(SV_SRCS:.c=.o)

CLIENT_SRCS = client.c
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)


all: $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C ./libft
$(FT_PRINTF):
	$(MAKE) -C ./ft_printf
$(SERVER): $(SV_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(SV_OBJS) $(LIBFT) $(FT_PRINTF) -o server
$(CLIENT): $(CLIENT_OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) $(FT_PRINTF) -o client

clean:
	$(MAKE) clean -C ./libft
	$(MAKE) clean -C ./ft_printf
	$(RM) $(SV_OBJS)
fclean: clean
	$(MAKE) fclean -C ./libft
	$(MAKE) fclean -C ./ft_printf
	$(RM) $(SERVER) $(CLIENT)
re: fclean all


