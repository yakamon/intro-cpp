CC = cc
C = main.c
O = $(C:%.c=%)

all: run clean

$(O):
	$(CC) -o $@ $(C)

run: $(O)
	./$(O)

clean:
	rm -f $(O)

.PHONY: run clean
