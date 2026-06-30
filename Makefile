CXX = g++
CXXFLAGS = -Wall -g

all: finalProj

finalProj: finalProj.cpp finalProj.h
	$(CXX) $(CXXFLAGS) -o finalProj finalProj.cpp finalProj.h

clean:
	rm -f *.o finalProj
