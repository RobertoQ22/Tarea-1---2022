all:
	g++ -c main.cpp
	g++ -c funciones.cpp
	g++ -o ejecutable main.o funciones.o

clean:
	del *.o *.exe

list:
	dir
