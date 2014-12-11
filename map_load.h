class MAP{
public:
int bn;//当たりブロックの数
};


class MHit{
public:

	 //int mchip[15][20];//マップチップ
	 //int mhit[15][20];//通行設定

	int x,y;
	int haba;

	double x_sa[2];//x座標の差
	double y_sa[2];
	
};


extern MHit bhit[300];

extern MAP map;


extern void map_load(void);

extern int ChipXY;//マップチップのサイズ３２

