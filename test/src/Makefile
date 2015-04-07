CXX = g++
CXXFLAGS = -g -L../vendor/gtest/lib -lgtest -lgtest_main -lpthread
INCS = -I./ -I../../src -I../vendor/gtest/include
OBJS = ../../src/sum.o sum_unittest.o

specs: $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) -o specs specs_all.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm -rf specs *.o specs.xml
