
OBJECTS=main.o BSTree.o Node.o 
LDFLAGS=
CXXFLAGS=

main: $(OBJECTS)
	g++ -o main $(OBJECTS)

main.o: main.cpp Node.h

BSTree.o: BSTree.cpp BSTree.h Node.h

Node.o: Node.cpp Node.h

clean:
	rm -f $(OBJECTS)