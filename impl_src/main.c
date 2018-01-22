#include <stdio.h>
#include <stdlib.h>
#include "macros.h"


int main(int argc, char * argv[]){
	if(IS_SET(11001101, 2)){
		printf("%d\n", 1);
	}
	else{
	printf("%d\n", 0); 
	}

	if(CLEAR_BIT(11001101, 2)){
		printf("%d\n", 1);
	}
	else{
		printf("%d\n", 0);
	}

return 0;
}
