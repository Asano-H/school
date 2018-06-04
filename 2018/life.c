#include<stdio.h>

#define tate 40
#define yoko 15

int ransu(int no){
	int ran;
	ran= rand()%no;	/*乱数生成*/
	return ran;
}


int main(void){
	srand(time(NULL));


	char map[tate][yoko];
	int sign;

	for(int y=0;y<tate;y++){
		for(int x=0;x<yoko;x++){
			sigh = ransu(2);
			switch(sign){
				case 0: map[y][x]="O";
				case 1: map[y][x]='X'
			}
		}

	}
}