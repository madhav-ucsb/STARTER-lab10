CXX=g++
# CXX=clang++

all: prog1 prog2


prog1: prog1.o strFuncs.o tddFuncs.o
	${CXX} prog1.o strFuncs.o tddFuncs.o -o prog1
prog2: prog2.o tddFuncs.o recLinkedListFuncs.o linkedListFuncs.o
	${CXX} prog2.o linkedListFuncs.o tddFuncs.o recLinkedListFuncs.o -o prog2





strFuncs.o: strFuncs.cpp strFuncs.h
	${CXX} strFuncs.cpp -c

recLinkedListFuncs.o: recLinkedListFuncs.cpp linkedListFuncs.h linkedList.h
	${CXX} recLinkedListFuncs.cpp -c

tddFuncs.o: tddFuncs.cpp strFuncs.h tddFuncs.h
	${CXX} tddFuncs.cpp -c



linkedListFuncs.o: linkedListFuncs.cpp linkedListFuncs.h linkedList.h
	${CXX} linkedListFuncs.cpp -c

prog1.o: prog1.cpp strFuncs.h tddFuncs.h
	${CXX} prog1.cpp -c

prog2.o: prog2.cpp recLinkedListFuncs.h tddFuncs.h linkedListFuncs.h linkedList.h
	${CXX} prog2.cpp -c





clean:
	/bin/rm -f *.o prog1 prog2