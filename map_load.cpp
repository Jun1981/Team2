#include"include.h"

MHit bhit[];//通行判定



int ChipXY = 32;//マップチップのサイズ３２


unsigned static int c = 0;

MAP map;



//初期化

void map_load(void){

	map.bn = 0;

	int(*B)[2];
	B = new int[300][2];



	//LoadDivGraph("../Img/MAP/test2.jpg",4,4,1,32,32,m1,0);
	LoadDivGraph("../Img/MAP/TileB.png", 256, 16, 16, 32, 32, m2, 0);
	//当たり判定四隅座標
	for (i = 0; i < 15; i++){
		for (j = 0; j < 20; j++){

			if (mhit2[i][j] == 1){


				B[map.bn][0] = 32 * j;
				B[map.bn][1] = 32 * i;

				//bhit[map.bn].x=32*j;  //ｘ座標
				//bhit[map.bn].y=32*i;  //y座標
				bhit[map.bn].x = B[map.bn][0];
				bhit[map.bn].y = B[map.bn][1];



				map.bn++;//当たり判定の個数
							
				
									
			}
		}
	}

	delete[] B;//メモリ捨てる

}



