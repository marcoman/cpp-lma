# It has been a while since I wrote up makefiles.  Let's see how well I can do my c++ compilations

# Define the rules for my .cpp to .o files:
# TODO: Fix this up to capture all .cpp files and we don't have to name them by name
#SRCS = life.cpp grid.cpp cell.cpp
SRCS := $(wildcard *.cpp)

CXX = g++
TARGET = life
CXXFLAGS = 

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f $(TARGET)


.PHONY: all clean