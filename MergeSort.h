#ifndef __MERGESORT__H__
#define __MERGESORT__H__

#include <stdio.h>
#include <stdlib.h>

void* mergeSort(void* array,int left,int right);
void* merge(void* array,int left,int center,int right);

#endif
