# It has been a while since I wrote up makefiles.  Let's see how well I can do my c++ compilations

# Define the rules for my .cpp to .o files:
SRCS = test.cpp
CXX = g++
TARGET = test
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