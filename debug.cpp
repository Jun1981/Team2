#include "include.h"

void dbg_msg(){

	DrawFormatString(320, 16,(255,255,255) , "座標(%d,%d)", miku.x, miku.y);
	DrawFormatString(320, 32, (255,255,255), "見た目(%d,%d)、見た目幅%d", miku.rx, miku.ry,miku.r_haba);

	DrawFormatString(320, 48, (255, 255, 255), "ブロック０(%d,%d)", bhit[0].x, bhit[0].y);




}