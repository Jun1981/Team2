#include "include.h"



void pm(void){
	if (key.c != -1){

		


		//�㉺���E
		if (key.c == 2){
			miku.muki = 2;
			if (miku.x >= 0){ miku.x -= miku.spd; }
		}
		if (key.c == 6){//�E
			miku.muki = 6;
			//if( miku.x+miku.haba<=640){//�E
			//	miku.x+=miku.spd;
			//}

			miku.x += miku.spd;

			if (miku.x + miku.haba <= 640){//�E
			}

		}
		if (key.c == 4){
			miku.muki = 4;
			if (miku.y >= 0){//��
				miku.y -= miku.spd;
			}
		}
		if (key.c == 0){//��
			miku.muki = 0;
			if (miku.y + miku.tate <= 480){//��
				miku.y += miku.spd;
			}
		}

		//�ȂȂ�

		if (key.c == 3){//����
			if (miku.x > 0 && miku.y > 0){
				miku.x -= miku.n_spd;
				miku.y -= miku.n_spd;
				miku.muki = 3;
			}
			else if (miku.x > 0 && miku.y <= 0){//����ŏ�ɂԂ�����������
				miku.x -= miku.n_spd;
				miku.muki = 2;
			}
			else if (miku.x <= 0 && miku.y > 0){//����ō��ɂԂ����������
				miku.y -= miku.n_spd;
				miku.muki = 4;
			}
		}


		if (key.c == 5){
			if (miku.x + miku.haba < 640 && miku.y >= 0){//�E��
				miku.x += miku.n_spd;
				miku.y -= miku.n_spd;
				miku.muki = 5;
			}
			else if (miku.x + miku.haba < 640 && miku.y <= 0){//�E��ŏ�ɂԂ��������E��
				miku.x += miku.n_spd;
				miku.muki = 6;
			}
			else if (miku.x + miku.haba >= 640 && miku.y > 0){//�E��ŉE�ɂԂ����������
				miku.y -= miku.n_spd;
				miku.muki = 4;
			}
		}

		if (key.c == 1){
			if (miku.x>0 && miku.y + miku.tate < 480){//����
				miku.x -= miku.n_spd;
				miku.y += miku.n_spd;
				miku.muki = 1;
			}
			else if (miku.x>0 && miku.y + miku.tate >= 480){//����&��
				miku.x -= miku.n_spd;
				miku.muki = 2;
			}
			else if (miku.x <= 0 && miku.y + miku.tate < 480){//��������
				miku.y += miku.n_spd;
				miku.muki = 0;
			}
		}

		if (key.c == 7){
			if (miku.x + miku.haba < 640 && miku.y + miku.tate < 480){//�E��
				miku.x += miku.n_spd;
				miku.y += miku.n_spd;
				miku.muki = 7;
			}
			else if (miku.x + miku.haba < 640 && miku.y + miku.tate >= 480){//�E������
				miku.x += miku.n_spd;

				miku.muki = 6;
			}
			else if (miku.x + miku.haba >= 640 && miku.y + miku.tate < 480){//�E�����E
				miku.y += miku.n_spd;
				miku.muki = 0;
			}
		}

	}

	//�ړ����[�h�ؑ�
	if (key.z == 1){
		miku.spd = 10;
		miku.n_spd = miku.spd*cos(45 / 180.0*M_PI) + 0.5;
	}
	else{
		miku.spd = 4;
		miku.n_spd = miku.spd*cos(45 / 180.0*M_PI) + 0.5;//���@�X�s�[�h�ȂȂ߂̏�����
	}



}


