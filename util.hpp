#ifndef _UTIL_HPP
#define _UTIL_HPP

#include <sys/time.h>
#include <stdlib.h>

int randomBinomial() {
	
	struct timeval t; 
	gettimeofday(&t,NULL);
	srand(t.tv_usec);

	return ((rand() % 2) - (rand() % 2));

}

#endif