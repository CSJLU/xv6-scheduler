/*
#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
	int i = atoi(argv[1]);
	
    if(i<0 || i>1)
        printf(1,"Available options for fork winner: \n[\n0 = round robin (default),\n1 = stride scheduler\n]");
    
    set_sched(i);
    
    if(i == 0){
        printf(1, "Selecting round robin\n");
    } else if(i == 1){
        printf(1, "Selecting stride scheduler\n");
    }

    exit(); //return 0;
}
*/
