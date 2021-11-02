all: recursived recursives loopd loops mains maindloop maindrec
mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a -lm
maindloop: main.o
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm
recursives:libclassrec.a
loops:libclassloops.a
recursived:libclassrec.so
loopd:libclassloops.so
libclassloops.a:	basicClassification.o advancedClassificationLoop.o 
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
libclassrec.a:	basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o  
libclassrec.so:	basicClassification.o advancedClassificationRecursion.o
	gcc -Wall -g -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
libclassloops.so:	basicClassification.o advancedClassificationLoop.o
	gcc -Wall -g -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o
basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c 
main.o: main.c NumClass.h
	gcc -Wall -g -c main.c 

.PHONY: clean#.PHONY means that clean is not a file.
clean:
	rm -f *.o *.a *.so mains maindloop maindrec