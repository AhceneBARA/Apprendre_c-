
output: main.o Television.o
	g++ main.o Television.o -o output

main.o: main.cpp
	g++ -c main.cpp

message.o: Television.cpp Television.h
	g++ -c Television.cpp

clean: 
	rm *.o output