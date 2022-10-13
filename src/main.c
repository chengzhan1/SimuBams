#include "main.h"

#include <stdio.h>


#include <dlfcn.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "threads.h"

PARA_BAMS para = {1, {9600, 9600}, {0,1},{6,14}};
int main(int argc,char *argv[])
{
	int i;
	printf("argc = %d\n",argc);
	for(i=0;i<argc;i++)
	   printf("argv[%d] is %s\n",i,argv[i]);
	CreateThreads((void*)&para);
	while (1){}
	return 0;
}