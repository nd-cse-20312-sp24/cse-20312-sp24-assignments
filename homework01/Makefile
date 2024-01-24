CC=	gcc
CFLAGS=	-Wall -g -std=gnu99

test:	COPILOT
	@./COPILOT

sum: sum.c
	$(CC) $(CFLAGS) -o sum sum.c

clean:
	rm sum
