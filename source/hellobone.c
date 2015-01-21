/*
 * hellobone.c
 *
 * Version: 1.0
 * Date:	18.10.2013
 *
 * Copyright (c) 2013, jkuhlm - All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * In Eclipse add Include path
 *     C:\gcc-linaro\arm-linux-gnueabihf\libc\usr\include
 *
 */
/* */
#include <fcntl.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 

#include "hellobone.h"
  
/****************************************************************
 * Our main function with a little more than "Hello world!" only
 ****************************************************************/
 int main(void)
{ 
	int i;
	for(i=0;i<10;i++)
	{
		printf("Hello world! %d\n",i);

		if(i==5)
		{
			printf("FIVEx\n");
		}
		usleep(500000);
	}

	printf("calc = %d\n",calcsum(1,2));
 
    return 0; 
}
