//斜めチェック


#include "include.h"

MHit hb[300];//
double ang[2];
double kakudo = -45 / 180.0 * M_PI;
double deg135 = 135 / 180.0 * M_PI;

int mx0,mx1,x2, x3, x4,           my0,my1,y2, y3, y4,y5;



void dia_chk(void){//返り値の数字は自機の向いている方向

	mx0 = miku.rx, my0 = -1 * (miku.ry);//ミク左下
	mx1 = miku.rx + miku.r_haba; my1 = -1 * (miku.ry + miku.r_tate);//ミク左下
	for (i = 0; i < map.bn; i++){
		x2 = bhit[i].x , y2 = (-1) * (bhit[i].y);
		x3 = bhit[i].x + ChipXY, y3 = (-1) * (bhit[i].y + ChipXY );
		x4 = bhit[i].x + ChipXY * 2; y4 = (-1) * (bhit[i].y + ChipXY*2);
		y5 = -1*(bhit[i].y - ChipXY);

		
		DrawFormatString(480, 16, 0xffffff, "kakudo%f", kakudo);


		//右下
		if (   my0+mx1>x2+y3 &&   mx1+ my0<x4+y5   &&  (miku.ry >= bhit[i].y+ChipXY || miku.rx >= bhit[i].x+ChipXY)){
			miku.n_line[i][3] = 1;//右下にいる
			if (miku.n_line[i][3] == 1)DrawFormatString(480, 16 * 5 + i * 16, 0xffffff, "%dの右下ライン", i);
		}
		else miku.n_line[i][3] = 0;


		//左上
		if (my0 + mx1>x2 + y3 &&   mx1 + my0<x4 + y5 && (miku.ry+miku.r_tate >= bhit[i].y  || miku.rx+miku.r_haba <= bhit[i].x )){
			miku.n_line[i][0] = 1;//左上にいる
			if (miku.n_line[i][3] == 1)DrawFormatString(480, 16 * 5 + i * 16, 0xffffff, "%dの右下ライン", i);
		}
		else miku.n_line[i][0] = 0;


		//左下
		if (my1 - mx1<y2 - x2 && my1 - mx1 >y4 - x4 && (miku.rx + miku.r_haba <= x2 || miku.ry >= bhit[i].y + ChipXY)){
			miku.n_line[i][2] = 1;//左下
		}
		else 	miku.n_line[i][2] = 0;//

		//左下
		if (my1 - mx1<y2 - x2 && my1 - mx1 >y4 - x4 && (miku.rx >= x2 || miku.ry+miku.r_tate >= bhit[i].y )){
			miku.n_line[i][1] = 1;//左下
		}
		else 	miku.n_line[i][1] = 0;//


	}
	DrawFormatString(480, 16 * 6, 0xffffff, "miku.n_line[i]:%d", miku.n_line[i]);

	//DrawFormatString(480, 16 * 7, 0xffffff, "x4+y4:%d", x4 + y4);
	//DrawFormatString(480, 16 * 8, 0xffffff, "x2+y2:%d", x2 + );
	//DrawFormatString(480, 16 * 9, 0xffffff, "x3+y3:%d", x3 + y3);


	//	else miku.n_line[0] = -1;



}