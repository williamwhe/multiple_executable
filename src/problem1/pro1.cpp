//============================================================================
// Name        : test.cpp
// Author      : william.hw
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10];
	int idx,rest,pivot,swap;

	for(idx=0;idx<10;idx++)
	{
		scanf("%d",&arr[idx]);
	}

	// selection sorting
	for(idx=0;idx<9;idx++)
	{
		pivot=idx;	// select the idx-th element as pivot
		for(rest=idx+1;rest<10;rest++)	// iterate the rest elements
		{
			if(arr[rest]<arr[pivot])	// if rest element smaller than pivot, then mark it
			{
				pivot=rest;
			}
		}

		if(idx!=pivot)	// after one iteration, then swap position between pivot and idx-th element
		{
			swap=arr[idx];arr[idx]=arr[pivot];arr[pivot]=swap;
		}
	}

	for(idx=0;idx<10;idx++)
	{
		printf("%d ",arr[idx]);
	}
}
