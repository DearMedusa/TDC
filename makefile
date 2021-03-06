
CC      = gcc
OBJS    = main.o module1.o module2.o
CFLAGS  = -c -Wall -ansi -pedantic
LDFLAGS =
PGM     = programme

all: $(PGM)
$(PGM): $(OBJS)
  $(CC) -o $(PGM) $(OBJS) $(LDFLAGS)

.c.o:
  $(CC) $(CFLAGS) $<

clean:
  rm -f $(PGM)
  rm -f $(OBJS)
  rm -f *~
        
