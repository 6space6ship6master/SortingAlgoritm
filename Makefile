merge : MergeSort.o
	gcc -o merge MergeSort.o

MergeSort.o : MergeSort.h
	gcc -c MergeSort.c
