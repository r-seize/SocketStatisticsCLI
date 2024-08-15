CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC = src/main.c src/ss_commands.c src/user_interface.c src/utils.c
OBJ = $(SRC:.c=.o)
TARGET = SocketStatsCLI

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
