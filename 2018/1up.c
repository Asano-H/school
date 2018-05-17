#include<stdio.h>


int oneup(int );
int chack_10000(int );

int Xup(int po,int add_po){
	int level=0;
	int x=0;
	x = po+add_po;


	return level;

}

int Sup(int point){


}

int Nup(int level){
		int flag = 0;
	flag = chack_10000(po);
	do{
		if(flag > 0){
			level = oneup(level);
			x = x - 30000;
		}
		else{
			flag = 1;
			x = x - 10000;
		}
	}while(x >= 0);

	return level;
}


int oneup(int level){
	level ++;
	return level;
}


int chack_10000(int po){
	if (po > 10000){
		return 1;
	}
	else {
		return -1;
	}
}

int main(void){
	int point;
	int add_point;
	int residue;

	printf("持ち点はポイント？: ");
	scanf("%d",&point);

	printf("何ポイントの敵を倒した？： ");
	scanf("%d",&add_point);

	residue = Nup(point ,add_point);
	printf("%dup",residue);

}