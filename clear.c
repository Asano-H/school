#include<stdio.h>
void show(int v[], int len){
	int i;
	for(i=0; i<len; i++){
		printf("%d”Ô–Ú‚Ì—v‘fF%d\n",i,v[i]);
	}
}

void clear(int v[], int len, int val){
	int i;
	for(i=0; i<len; i++){
		v[i]=val;
	}
}
int main(void){
	int x[5]={1,30,-5,2,5000};
	puts("(‰Šúó‘Ô)");
	show(x,5);
	clear(x,5,100);
	puts("(clearŠÖ”‚ðŒÄo‚µ‚½Œã)");
	show(x,5);
	return 0;
}
