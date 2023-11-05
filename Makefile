all:
	g++ -o prog src/*.cpp -LC:/SFML-2.5.1/lib -IC:/SFML-2.5.1/include -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -DSFML_STATIC