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
#define MAX_JOBS 100

void fcfs(int num[], int n){
    int i, diff;
    int seek = 0;
    for(i=0;i<n-1;i++)
    {
        diff=abs(num[i+1]-num[i]);
        seek+=diff;
    }
    printf("\n(Nikki Talley) FCFS Total Seek: %d\t\n",seek);
}

int main(int argc, char *argv[]) {
    FILE *fp;
    int blocklist[MAX_JOBS];
    int number;
    int i = 0;
    if (argc == 2){
        fp = fopen(argv[1], "r");
    }
     else { 
         fp = stdin;
     }
    while( fscanf(fp, "%d", &number) > 0)
    {
      blocklist[i] = number;
      
        i++;
        
    }
    
    printf("Assignment 6: Block Access Algorithm");
    printf("\nBy: Nikki Talley, Chad Rasmussen and Josh Chevrier");
    printf("\n");
    fcfs(blocklist, i);
    sstf(blocklist, i);
    look(blocklist, i);
    cLook(blocklist, i);
     return 0;
 }