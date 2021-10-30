all: recursived recursives loopd loops mains maindloop maindrec
mains: main.o libclassrec.a 
	gcc -Wall -g -o mains main.o libclassrec.a -lm
maindloop: main.o
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm
loops:	basicClassification.o advancedClassificationLoop.o 
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
recursives:	basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o  
recursived:	basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
loopd:	basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o
basicClassification.o: basicClassification.c NumClass.h
	gcc -c basicClassification.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -c advancedClassificationRecursion.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -c advancedClassificationLoop.c 
main.o: main.c NumClass.h
	gcc -c main.c 

.PHONY: clean#.PHONY means that clean is not a file.
clean:
	rm -f *.o 