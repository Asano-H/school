#include<stdio.h>

int main(void){
	int month,no;
	char seasons[][10] ={"spring","summer","autumn","winter"};
	printf("ŒŽ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&month);

	if(month>=3 && month<=5){
		no=0;
	}else if(month>=6 && month<=8){
		no=1;
	}else if(month>=9 && month<=11){
		no=2;
	}else{
		no=3;
	}

	printf("%s",seasons[no]);
	return 0;
}