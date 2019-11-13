CC = gcc

#  -g		adds debugging to the exe
#  -Wall	turns on most compiler warnings
CFLAGS = -g -Wall

TARGET=proper

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)

