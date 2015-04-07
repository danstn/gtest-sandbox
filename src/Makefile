CXX = g++
INCS = -I./
OBJS = sum.o

adder: main.cpp $(OBJS)
	$(CXX) -o adder main.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm -rf *.o adder gmon.out
