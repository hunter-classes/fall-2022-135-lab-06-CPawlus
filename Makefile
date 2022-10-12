main: main.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o 
	g++ -o tests tests.o

test-ascii: test-ascii.o 
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp 
	g++ -c test-ascii.cpp

main.o: main.cpp caesar.h
	g++ -c main.cpp

tests.o: tests.cpp doctest.h 
	g++ -c tests.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h
	g++ -c decrypt.cpp

clean:
	rm -f test-ascii main tests main.o tests.o test-ascii.o caesar.o vigenere.o decrypt.o
