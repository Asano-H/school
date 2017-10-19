/*最大公約数*/
int gcd(int x,int y){
	if(x==y)
		return x;
	else 
		return gcd(y,x&y);
	}
}
int main(void){
	int x,y;
	printf("最大公約数を求めます\n");
	printf("Ｘ：");	scanf("%d",&x);
	printf("Ｙ：");	scanf("%d",&y);

	printf("最大公約数は%dです",gcd(x,y));
	return 0;
}


/*ユークリッドの互除法
　２つの整数値を二辺とした長方形を作るとする。
　短い方の値を１辺とする正方形を作っていき、
　余った長方形もさらに短い１辺で正方形を作っていく
　余りが出ないきれいな正方形ができたとき、その１辺の値が最大公約数*/