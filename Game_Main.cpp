#include "include.h"





void Game_Main(void){
	

	key_chk();//キーチェック
	key_henkan();//キー変換
	
	dia_chk();//斜めチェック
	pm();//プレイヤー計算
	p_anime();//自キャラアニメーション
	

	
	map_show();//マップ表示
	dbg_msg();
	
	jiki_show();
	

}