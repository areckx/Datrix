CC=g++
CFLAGS=-c -DLINUX -I. -LSDL/lib
LDFLAGS=-lSDL -lSDL_gfx
SOURCES=src/Main.cpp src/Game.cpp src/Board.cpp src/IO.cpp src/Pieces.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=trixx

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	-rm -f $(OBJECTS) $(EXECUTABLE)
