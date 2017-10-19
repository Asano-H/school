/*最大公約数を求める*/
#include<stdio.h>
int gcd(int x,int y){
	if(x==y)
		return x;
	else 
		return gcd(y,x%y);
}

int main(void){
	int x,y;
	printf("\n");
	printf("Ｘ：");	scanf("%d",&x);
	printf("Ｙ：");	scanf("%d",&y);

	printf("最大公約数は%dです",gcd(x,y));
	return 0;
}
/*ユークリッドの互除法
２つの整数を２辺とした長方形を作る。
短いほうの辺を１辺とした正方形を作っていく。
余った長方形を、さらに短い辺で正方形を作る。
余りが出ず綺麗に正方で埋め尽くされたとき、
最も小さい正方形の１辺が最大公約数となる。*/