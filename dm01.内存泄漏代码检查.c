#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "memwatch.h"

int getMem(char **myp)
{
	char *p = NULL;

    p = (char *)mwMalloc(100,__FILE__,__LINE__);  //mwMalloc(100,__FILE__,__LINE__)

	strcpy(p, "aaaabbbb");
	*myp = p;
	return 0;
}

int main(int arg,char *args[])
{
    printf("。。。。。。。。。。 \n");
	char *myp = NULL;
	getMem(&myp);
	printf("%s \n", myp);

//    if (myp != NULL)
//    {
//        free(myp);
//    }
	
	printf("hello...\n");
	system("pause");
	return 1;
}
