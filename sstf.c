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

void sstf(int num[], int n){
  //  qsort( num, n, sizeof(int), compare );
  
    int i = 0, j = 0, temp = 0;
    int head = num[0];
    int seek = 0;
    int diffArray[n];
    for(i=1;i<n-1;i++)
    {
        diffArray[i]=abs(head-num[i]);
    }
    for (i = 0; i < n; i++){
        for (j =i+1; j<n-1; j++){
            if (diffArray[i] > diffArray[j]){
                temp = diffArray[i];
                diffArray[i] = diffArray[j];
                diffArray[j] = temp;
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    for (i =1; i< n-1; i++){
        seek += abs(head-num[i]);
        head = num[i];
    }

    printf("(Nikki Talley) SSTF Total Seek: %d\n", seek);
}
