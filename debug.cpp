#include "include.h"

void dbg_msg(){

	DrawFormatString(320, 16,(255,255,255) , "���W(%d,%d)", miku.x, miku.y);
	DrawFormatString(320, 32, (255,255,255), "������(%d,%d)�A�����ڕ�%d", miku.rx, miku.ry,miku.r_haba);

	DrawFormatString(320, 48, (255, 255, 255), "�u���b�N�O(%d,%d)", bhit[0].x, bhit[0].y);




}