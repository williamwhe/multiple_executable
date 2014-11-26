/*
 * test2.cpp
 *
 *  Created on: 2014年11月24日
 *      Author: william.hw
 */

#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strlen("abcd\0ef\0g"));
	char str1[]="LOWer Case";
	char * strtemp = NULL;
	strtemp = strlwr(str1);
	printf("The string str converted is:  %s  ", strtemp);
	return 0;
}


