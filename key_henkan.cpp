#include "include.h"

void key_henkan(void){


	//�㉺���E��������

	if (ChkKAny == TRUE){

		if ((Key_Info & 0x0f) == 0x01){ key.c = 2; }//��
		if ((Key_Info & 0x0f) == 0x02){ key.c = 6; }//�E
		if ((Key_Info & 0x0f) == 0x04){ key.c = 4; }//��
		if ((Key_Info & 0x0f) == 0x08){ key.c = 0; }//��
						  
						  
						  
		if ((Key_Info & 0x0f) == 0x05){ key.c = 3; }//����
						   
		if ((Key_Info & 0x0f) == 0x06){ key.c = 5; }//�E��
						   
		if ((Key_Info & 0x0f) == 0x09){ key.c = 1; }//����
						   
		if ((Key_Info & 0x0f) == 0x0a){ key.c = 7; }//�E��
		/////////////////////////////

		if ((Key_Info & 0x0f) == 0x00){
			key.c = -1;//�\���L�[����
		}




		if ((Key_Info & 0x20) == 0x20){ key.z = 1; }
		else{ key.z = 0; }

	}
	else{ key.c = -1; key.z = 0; }//�L�[����

}