//斜めチェック


#include "include.h"

MHit hb[300];//
double ang[2];
double kakudo = -45 / 180.0 * M_PI;
double deg135 = 135 / 180.0 * M_PI;

int x2, x3, x4, y2, y3, y4;



void dia_chk(void){//返り値の数字は自機の向いている方向


	for (i = 0; i < map.bn; i++){
		x2 = bhit[i].x - ChipXY, y2 = (-1) * (bhit[i].y + ChipXY * 2);
		x3 = bhit[i].x + ChipXY, y3 = (-1) * (bhit[i].y);

		x4 = miku.rx, y4 = -1 * (miku.ry + miku.r_tate);
		DrawFormatString(480, 16, 0xffffff, "kakudo%f", kakudo);


		//右下
		if ((x4 + y4) > (x2 + y2) && (x3 + y3) > (x4 + y4) && (miku.ry >= bhit[i].y + ChipXY || miku.rx >= bhit[i].x + ChipXY)){
			miku.n_line[i] = 3;//右下にいる

			if (miku.n_line[i] == 3)DrawFormatString(480, 16 * 5+i*16, 0xffffff, "%dの右下ライン", i);
		}
		else
			//if ()
			miku.n_line[i] = -1;
	}
	DrawFormatString(480, 16 * 6, 0xffffff, "miku.n_line[i]:%d", miku.n_line[i]);

	//DrawFormatString(480, 16 * 7, 0xffffff, "x4+y4:%d", x4 + y4);
	//DrawFormatString(480, 16 * 8, 0xffffff, "x2+y2:%d", x2 + );
	//DrawFormatString(480, 16 * 9, 0xffffff, "x3+y3:%d", x3 + y3);


	//	else miku.n_line[0] = -1;



}