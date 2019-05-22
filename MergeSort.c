#include "MergeSort.h"

void* mergeSort(void * array,int left,int right){
	int center = 0;
	if(left < right){
		center = (left + right) / 2;
		mergeSort(array,left,center);
		mergeSort(array,center+1,right);
		merge(array,left,center,right);
	}
}

void* merge(void* array,int left,int center,int right){
	int i = left;
	int j = center + 1;
	int k = 0;
	int b = right - left + 1;//Questo deve essere un array temporaneo
	
	while((i <= center) && (j <= right)){
		if(array[i] <= array[j]){
			b[k] = a[i];
			i++;
		}
		else{
			b[k] = array[j];
			j++;
		}
		k++;
	}

	while(i <= center){
		b[k] = array[i];
		i++;
		k++;
	}

	while(j <= right){
		b[k] = array[j];
		j++;
		k++;
	}

	for(k = left;k <= right){
		array[k] = b[k-left];
	}
	
	return array;
}
