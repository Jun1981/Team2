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
		if (key.c == 6){//右
			miku.muki = 6;
			mb_chk(6, nokori);
			miku.rx += nokori[0];
			//miku.x += nokori[0];
			
			}
		//上
		if (key.c == 4){
			miku.muki = 4;
			mb_chk(4, nokori);
			miku.ry -= nokori[1];
			//miku.y -= nokori[1];

			
		}
		if (key.c == 0){//下
			miku.muki = 0;
			mb_chk(0, nokori);
			miku.ry += nokori[1];
			//miku.y += nokori[1];
			
		}

		//ななめ

		if (key.c == 3){//左上
			miku.muki = 3;
			mb_chk(3, nokori);

			miku.rx -= nokori[0];
			miku.ry -= nokori[1];

		

			//miku.x -= nokori[0];
			//miku.y -= nokori[1];
		}


		if (key.c == 5){
			if (miku.rx + miku.haba < 640 && miku.ry >= 0){//右上
				miku.rx += miku.n_spd;
				miku.ry -= miku.n_spd;

			/*	miku.x += miku.n_spd;
				miku.y -= miku.n_spd;*/

				miku.muki = 5;
			}
			else if (miku.rx + miku.haba < 640 && miku.ry <= 0){//右上で上にぶつかった時右に
				miku.rx += miku.n_spd;
				/*miku.x += miku.n_spd;*/
				miku.muki = 6;
			}
			else if (miku.rx + miku.haba >= 640 && miku.ry > 0){//右上で右にぶつかった時上に
				miku.ry -= miku.n_spd;
				/*miku.y -= miku.n_spd;*/
				miku.muki = 4;
			}
		}

		if (key.c == 1){
			if (miku.rx>0 && miku.ry + miku.r_tate < 480){//左下
				miku.rx -= miku.n_spd;
				miku.ry += miku.n_spd;
			/*	miku.x -= miku.n_spd;
				miku.y += miku.n_spd;*/
				miku.muki = 1;
			}
			else if (miku.rx>0 && miku.ry + miku.r_tate >= 480){//左下&下
				miku.rx -= miku.n_spd;
			/*	miku.x -= miku.n_spd;*/

				miku.muki = 2;
			}
			else if (miku.rx <= 0 && miku.ry + miku.r_tate < 480){//左下＆左
				miku.ry += miku.n_spd;

				miku.muki = 0;
			}
		}

		if (key.c == 7){
			if (miku.rx + miku.haba < 640 && miku.ry + miku.r_tate < 480){//右下
				miku.rx += miku.n_spd;
				miku.ry += miku.n_spd;

			/*	miku.x += miku.n_spd;
				miku.y += miku.n_spd;*/
				miku.muki = 7;
			}
			else if (miku.rx + miku.haba < 640 && miku.ry + miku.r_tate >= 480){//右下＆↓
				miku.rx += miku.n_spd;

			/*	miku.x += miku.n_spd;*/

				miku.muki = 6;
			}
			else if (miku.rx + miku.haba >= 640 && miku.ry + miku.r_tate < 480){//右下＆右
				miku.ry += miku.n_spd;
			/*	miku.y += miku.n_spd;*/
				miku.muki = 0;
			}
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


