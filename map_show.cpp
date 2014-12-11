#include "include.h"

int m2[300];

void map_show(void){
	for(i=0;i<15;i++){
		for(j=0;j<20;j++){	
			
				DrawGraph(j*32,i*32,m2[ map2[i][j]],1);
			
				
			
		}
	}

}