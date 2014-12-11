#include "include.h"

void jiki_show(){
	
	if (key.c==-1)DrawGraph(miku.rx-8, miku.ry-32, miku.GH[miku.muki], 1);
	else DrawGraph(miku.rx-8, miku.ry-32, miku.GH_W[miku.muki][miku.anime], 1);
}


