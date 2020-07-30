build:
	g++ -w -std=c++14 \
	./data-structures.cpp \
	-o bin/data-structure-examples \

clean:
	rm ./bin/data-structure-examples;

run:
	./bin/data-structure-examples;

