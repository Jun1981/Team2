

#include "include.h"
   
int c=0;

//マップ通行チェック
void mb_chk(int k, int *x){ //kキャラの向き x残りの距離
	
	switch (k){
	case 0:
		for (i = 0; i < map.bn; i++){
			if (miku.ry + miku.r_tate <= bhit[i].y  && miku.ry + miku.r_tate + miku.spd > bhit[i].y   && miku.rx + miku.r_haba > bhit[i].x && miku.rx < bhit[i].x + ChipXY){

				x[1] = bhit[i].y - (miku.ry + miku.r_tate);
				return;

			}
		}
		x[1] = miku.spd; x[0] = 0;

		return;
	case 2:
		for (i = 0; i < map.bn; i++){
			if (miku.rx >= bhit[i].x + ChipXY && miku.rx - miku.spd < bhit[i].x + ChipXY && miku.ry + miku.r_tate > bhit[i].y && miku.ry < bhit[i].y + ChipXY){

				x[0] = miku.rx - (bhit[i].x + ChipXY);
				return;

			}
		}
		x[0] = miku.spd; x[1] = 0;
		return;
	case 3:
	/*	for (i = (map.bn - 1); i >= 0; i--){*/


		for (i = map.bn-1; i >=0; i--){
			DrawFormatString(480, 16, (255, 255, 255), "%d", miku.n_line[i]);

			if (miku.n_line[i] == 3){
				if (miku.rx - miku.n_spd < bhit[i].x + ChipXY &&  miku.ry - miku.n_spd < bhit[i].y + ChipXY){
					DrawFormatString(480, 16, (255, 255, 255), "壁発見");

					if (miku.rx >= bhit[i].x + ChipXY && miku.ry >= bhit[i].y + ChipXY){//右下

						DrawFormatString(480, 32, (255, 255, 255), "右下");

						x[0] = miku.rx - (bhit[i].x + ChipXY);
						x[1] = miku.ry - (bhit[i].y + ChipXY);
						return;

					}
					else if (miku.rx < bhit[i].x + ChipXY&& miku.ry >= bhit[i].y + ChipXY){
						//上端


						DrawFormatString(480, 32, (255, 255, 255), "上端");
						x[0] = miku.n_spd;
						x[1] = miku.ry - (bhit[i].y + ChipXY);
						return;




					}
					else if (miku.rx >= bhit[i].x + ChipXY && miku.ry < bhit[i].y + ChipXY){

						DrawFormatString(480, 32, (255, 255, 255), "右端");

						x[0] = miku.rx - (bhit[i].x + ChipXY);


						mb_chk(4, x);
						//x[1] = miku.n_spd;
						return;


					}
				}
			}
			x[0] = miku.n_spd;
			x[1] = miku.n_spd;

			/*	}*/
		}
	
			break;

	case 4:

		for (i = 0; i<map.bn; i++){
			if (miku.ry >= bhit[i].y+ChipXY  && miku.ry - miku.spd < bhit[i].y+ChipXY   && miku.rx + miku.r_haba > bhit[i].x && miku.rx < bhit[i].x + ChipXY){

				x[1] = miku.ry - (bhit[i].y+ChipXY );
				return;

			}
		}
		x[1] = miku.spd; x[0] = 0;
		return;

	case 6:

		for (i = 0; i<map.bn; i++){
			if (miku.rx+miku.r_haba <= bhit[i].x  && miku.rx +miku.r_haba+ miku.spd > bhit[i].x  && miku.ry + miku.r_tate > bhit[i].y && miku.ry < bhit[i].y + ChipXY){

				x[0] = bhit[i].x-(miku.rx+miku.r_haba);
				return;

			}
		}
		x[0] = miku.spd; x[1] = 0;
		return;


	}//switch終わり
}
