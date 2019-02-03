CXX = g++
VERSION = -std=c++14
CFLAGS = -pedantic -Wall -g -Wextra

dnddieroll: dnddieroll.cpp
	$(CXX) $(VERSION) $(CFLAGS) -o dieroll dnddieroll.cpp 
# for UNIX / Linux 
remove:
	\rm -f *.o dieroll
	@echo removed all the object files