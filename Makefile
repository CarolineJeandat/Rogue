CXX = g++
CXXFLAGS = -Wall -ggdb -Iinclude
RM = rm -f
AR = /usr/bin/ar -r

src := $(wildcard src/*.cpp)
obj := $(subst src, build, $(src:.cpp=.o))

all: directories libmorse.a rogue

rogue: main.cpp librogue.a
	$(CXX) $(CXXFLAGS) $^ -o $@

librogue.a: $(obj)
	$(AR) $@ $^

build/%.o: src/%.cpp include/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

directories: build
build:
	mkdir -p $@

clean:
	$(RM) librogue.a rogue
	rm -r build