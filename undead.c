#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t idnum;
	idnum = fork();
	if (idnum == 0){
		printf("Now the dead RISE!\n");
		exit(0);
	} else {
		sleep(19);
		printf("And now, they shall rest once more!\n");
	}
	return 0;
}
