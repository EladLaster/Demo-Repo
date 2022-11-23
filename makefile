all: makeloops makerecursives makerecursived makeloopd mains maindloop maindrec

CC=gcc
FLAGS=-Wall -g
AR=ar


mains: main.o libclassrec.a
	$(CC) $(FLAGS) main.o libclassrec.a -o mains -lm

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) main.o libclassloops.so -o maindloop -lm

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) main.o libclassrec.so -o maindrec -lm



makeloops: libclassloops.a 
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a

makerecursives: libclassrec.a
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	ranlib libclassrec.a

makerecursived: libclassrec.so
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) $(FLAGS) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o -lm

makeloopd: libclassloops.so
libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) $(FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o -lm


basicClassification.o: basicClassification.c
	$(CC) $(FLAGS) -c basicClassification.c 

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c
	.PHONY: clean all 

clean: 
	rm -f *.o *.a *.so makemaindrec makemaindloop