#CXX = g++
CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= mafTest1 \
	mafTest2 \
	mafTest3 \
	mafTest4 \
	addIntToEndOfListTest \
	mllfTest1 \
	mllfTest2 \
	mllfTest3 \
	mllfTest4 \
	mllfTest5 \
	mllfTest6 \
	mllfTest7


COMMON_OBJECT_FILES = linkedListFuncs.o moreArrayFuncs.o moreLinkedListFuncs.o tddFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./mafTest1
	./mafTest2
	./mafTest3
	./mafTest4
	./addIntToEndOfListTest
	./mllfTest1
	./mllfTest2
	./mllfTest3
	./mllfTest4
	./mllfTest5
	./mllfTest6
	./mllfTest7

mafTest1: mafTest1.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mafTest2: mafTest2.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mafTest3: mafTest3.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mafTest4: mafTest4.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest1: mllfTest1.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest2: mllfTest2.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest3: mllfTest3.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest4: mllfTest4.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest5: mllfTest5.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest6: mllfTest6.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

mllfTest7: mllfTest7.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

addIntToEndOfListTest: addIntToEndOfListTest.o ${COMMON_OBJECT_FILES}
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
