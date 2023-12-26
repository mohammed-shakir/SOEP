CXX = g++
CXXFLAGS = -Wall -Iinclude -Ilib/cspice/include # Include CSPICE headers
LDLIBS = -Llib/cspice/lib -l:cspice.a  # Link CSPICE static library
SRC = $(shell find src -name '*.cpp')
OBJ = $(SRC:.cpp=.o)
EXEC = SOEP

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDLIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)