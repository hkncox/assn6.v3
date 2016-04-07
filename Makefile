assn6: fcfs.o sstf.o look.o cLook.o
	gcc -o assn6 fcfs.o sstf.o look.o cLook.o
	
fcfs: fcfs.c 
	gcc -g -Wall -Werror -o fcfs fcfs.c

sstf: sstf.c 
	gcc -g -Wall -Werror -o sstf sstf.c
	
look: look.c 
	gcc -g -Wall -Werror -o look look.c
		
cLook: cLook.c 
	gcc -g -Wall -Werror -o cLook cLook.c