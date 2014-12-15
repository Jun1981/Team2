class jiki{
	
public:
	int x, y;//座標
	int GH[8];//
	int GH_W[8][6];//歩きグラ
	int haba;//幅
	int r_haba;//見た目の幅
	int tate;//縦サイズ（６４）
	int r_tate;//見た目の縦サイズ（３２）
	int ry;//見た目のy座標
	int rx;//見た目のｘ座標
	int muki;//向き	

	int n_line[300][4];//斜めラインチェック用

	int spd;//スピード
	int n_spd;//スピード斜め
	/////////////////////////

	

	int m_mode;//移動モード

	int dead;//死亡フラグ

	int anime;//アニメーション
	int anime_c;//アニメーションカウンタ

};

extern jiki miku;//クラス宣言





extern void PG_Load(void);//自機画像読み込み関数