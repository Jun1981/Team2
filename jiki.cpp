#include "include.h"



jiki miku;//自機のクラス宣言





void PG_Load(void){

	
	LoadDivGraph("../Img/miku/mikusan.png", 8, 8, 1, 48, 64, miku.GH, 1);//自機画像（ミクさん）

	LoadDivGraph("../Img/miku/loop1000/loop0.png", 6, 6, 1, 48, 64, miku.GH_W[0], 1);//自機画像（ミクさん）下
	LoadDivGraph("../Img/miku/loop1001/loop1.png", 6, 6, 1, 48, 64, miku.GH_W[1], 1);//自機画像（ミクさん）左下
	LoadDivGraph("../Img/miku/loop1002/loop2.png", 6, 6, 1, 48, 64, miku.GH_W[2], 1);//自機画像（ミクさん）左

	LoadDivGraph("../Img/miku/loop1003/loop3.png", 6, 6, 1, 48, 64, miku.GH_W[3], 1);//自機画像（ミクさん）左上

	LoadDivGraph("../Img/miku/loop1004/loop4.png", 6, 6, 1, 48, 64, miku.GH_W[4], 1);//自機画像（ミクさん）上
	LoadDivGraph("../Img/miku/loop1005/loop5.png", 6, 6, 1, 48, 64, miku.GH_W[5], 1);//自機画像（ミクさん）右上

	LoadDivGraph("../Img/miku/loop1006/loop6.png", 6, 6, 1, 48, 64, miku.GH_W[6], 1);//自機画像（ミクさん）右
	LoadDivGraph("../Img/miku/loop1007/loop7.png", 6, 6, 1, 48, 64, miku.GH_W[7], 1);//自機画像（ミクさん）右下
}



