main: main.o funcs.o caesar.o
	g++ -o main -std=c++11 main.o funcs.o caesar.o

tests: tests.o funcs.o
	g++ -o tests -std=c++11 tests.o funcs.o caesar.o

#.o files
caesar.o: caesar.cpp caesar.h
	g++ -c -std=c++11 caesar.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c -std=c++11 funcs.cpp caesar.cpp

main.o: main.cpp caesar.h funcs.h
	g++ -c main.cpp funcs.cpp caesar.cpp

tests.o: tests.cpp doctest.h funcs.h caesar.h
	g++ -c -std=c++11 tests.cpp funcs.cpp caesar.cpp

#misc
clean:
	rm -f main.o funcs.o tests.o caesar.o
	rm -f main ./a.out tests
