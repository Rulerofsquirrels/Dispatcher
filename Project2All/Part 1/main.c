#define MAXARGS 40
#include <stdio.h>
#include <sys/types.h>

//structure of a process
typedef struct pcb{
	pid_t pid;
	char * args[MAXARGS];
	int arrivaltime;
	int remainingcputime;
	struct pcb* next;
} Pcb;
typedef Pcb* PcbPntr;


int main(int argc, char** argv)
{ 
	//create Queue Line FIFO array
	PcbPntr* processlist;
	//make constructor for pcb
	//loop through all entries for pcb
	//place entries into processlist array.
	printf("Dispatcher here i come\n");
	return 0;
}
