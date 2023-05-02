main: main.o Stack.o IntNode.o Queue.o
	g++ -o main main.o Stack.o IntNode.o Queue.o
tests: tests.o Queue.o Stack.o IntNode.o doctest.h
	g++ -o tests -g tests.o Queue.o Stack.o IntNode.o

main.o: main.cpp Stack.h IntNode.h
tests.o: tests.cpp Stack.h IntNode.h
Stack.o: Stack.cpp Stack.h IntNode.h
Queue.o: Queue.cpp Queue.h IntNode.h
IntNode.o: IntNode.cpp IntNode.h

clean:
	rm -f *.o