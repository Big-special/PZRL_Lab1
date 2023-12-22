CC = gcc
CFLAGS = -WALL

TARGET = my_program

SRC = main.c funcs.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)
$(TARGET): $(OBJ)
  $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
  $(CC) $(CFLAGS) -c -o $@ $<

clean:
  rm -f $(OBJ) $(TARGET)

run: $(TARGET)
  ./$(TARGET)
