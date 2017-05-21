all: LS-DTS

LS-DTS: LS-DTS.cpp graph.h localSearch.h constants.h \
					myBijection.h operandSets.h vertexLinkedQueue.h \
					longDoubleComparison.h
	g++ -std=gnu++0x -O3 -static LS-DTS.cpp -o LS-DTS

clean: rm -f *~
