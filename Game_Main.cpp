#include "include.h"





void Game_Main(void){
	

	key_chk();//�L�[�`�F�b�N
	key_henkan();//�L�[�ϊ�
	
	dia_chk();//�΂߃`�F�b�N
	pm();//�v���C���[�v�Z
	p_anime();//���L�����A�j���[�V����
	

	
	map_show();//�}�b�v�\��
	dbg_msg();
	
	jiki_show();
	

}