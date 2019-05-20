#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	void *a;

	memset(a, 'f', 12);
  
    printf("After memset():  %s", (char *)a); 
	return(0);
}
