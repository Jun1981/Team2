#include "include.h"

int nokori[2];//残り距離　ｘ、ｙ

void pm(void){
	if (key.c != -1){
		//左
		if (key.c == 2){
			miku.muki = 2;
			mb_chk(2,nokori);
			miku.rx -= nokori[0];
		/*	miku.x -= nokori[0];*/
			
		}
		else if (key.c == 6){//右
			miku.muki = 6;
			mb_chk(6, nokori);
			miku.rx += nokori[0];
			//miku.x += nokori[0];
			
			}
		//上
		else if (key.c == 4){
			miku.muki = 4;
			mb_chk(4, nokori);
			miku.ry -= nokori[1];
			//miku.y -= nokori[1];

			
		}
		else if (key.c == 0){//下
			miku.muki = 0;
			mb_chk(0, nokori);
			miku.ry += nokori[1];
			//miku.y += nokori[1];
			
		}

		//ななめ

		else if (key.c == 3){//左上
			miku.muki = 3;
			mb_chk(3, nokori);

			miku.rx -= nokori[0];
			miku.ry -= nokori[1];

		

			//miku.x -= nokori[0];
			//miku.y -= nokori[1];
		}


		else if (key.c == 5){
			miku.muki = 5;
			mb_chk(5, nokori);

			miku.rx += nokori[0];
			miku.ry -= nokori[1];
		}
		//左下
		else if (key.c == 1){

			miku.muki = 1;
			mb_chk(1, nokori);

			miku.rx -= nokori[0];
			miku.ry += nokori[1];
			
		}
		//右下
		else if (key.c == 7){
			miku.muki = 7;
			mb_chk(7, nokori);

			miku.rx += nokori[0];
			miku.ry += nokori[1];
		}

	}

	//移動モード切替
	if (key.z == 1){
		miku.spd = 10;
		miku.n_spd = miku.spd*cos(45 / 180.0*M_PI) + 0.5;
	}
	else{
		miku.spd = 4;
		miku.n_spd = miku.spd*cos(45 / 180.0*M_PI) + 0.5;//自機スピードななめの初期化
	}



}


