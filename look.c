/* Promise of Originality
I promise that this source code file has, in it's entirety, been
written by myself or a member of my group and by no other person or
persons. If at any time an exact copy of this source code is found to
be used by another person outside my group in this term, I understand
that all members of my group and the members of the group that
submitted the copy will receive a zero on this assignment.
NIKKI TALLEY CHAD RASMUSSEN AND JOSH CHEVRIER WORKED ON THIS TOGETHER
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_JOBS 100

int compare1( const void* a, const void* b)
{
     return ( *(int*)a - *(int*)b );
}

void look(int trackTimes[], int n){
    
    int* lookTimes = malloc(n*sizeof(int));
    memcpy(lookTimes, trackTimes, sizeof(int)*n);
    
    int startValue = lookTimes[0];
    int i, startPoint, seek = 0;
    int j=0;
    qsort(lookTimes, n, sizeof(int), compare1);
    
    for(i = 0; i < n ;i++){
        if(lookTimes[i] == startValue){
            startPoint = i;
            break;
        }
    }
    
	for(i = startPoint; i < n - 1; i++) {
		seek += abs(lookTimes[i + 1] - lookTimes[i]);
		//printf("first seek: %d")
	}
	if(startPoint != 0){
    	seek += abs(lookTimes[n - 1] - lookTimes[startPoint -1]);
    	
    	for(j = startPoint - 1; j > 0; j--) {
    		seek += abs(lookTimes[j - 1] - lookTimes[j]);
    	}
	}

	printf("(Chad Rasmussen) LOOK Total Seek: %d\n", seek);
}