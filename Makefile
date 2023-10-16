CFLAGS= $(IDIR) -IC:/SFML-2.5.1/include
LDIR =-LC:/SFML-2.5.1/lib
LIBS =-lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -DSFML_STATIC


all:
	g++ -o prog src/*.cpp $(CFLAGS) $(LDIR) $(LIBS)