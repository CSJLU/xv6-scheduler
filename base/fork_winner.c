#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
	int i = atoi(argv[1]);
	
    if(i<0 || i>1)
        printf(1,"Available options for fork winner: \n[\n0 = parent first,\n1 = child first\n]");
    
    fork_winner(i);
    
    if(i == 0){
        printf(1, "Selecting parent first\n");
    } else if(i == 1){
        printf(1, "Selecting child first\n");
    }

    exit(); //return 0;
}
