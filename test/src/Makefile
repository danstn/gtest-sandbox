CXX = g++
CXXFLAGS = -g -lgtest -lgtest_main -lpthread
INCS = -I./ -I../../src -I../lib/gtest/include
OBJS = sum_unittest.o

testAll: $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) -o testAll main_test_all.cpp $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm testAll *.o testAll.xml
