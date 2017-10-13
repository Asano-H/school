#include<stdio.h>
enum country {USA,UK,Japan,France,China};

void printCountry(enum country c){
	switch(c){
		case USA:printf("アメリカ\n");break;
		case UK:printf("イギリス\n");break;
		case Japan:printf("日本\n");break;
		case France:printf("フランス\n");break;
		case China:printf("中国\n");break;
	}
}
int main(void){
	enum country _country;
	_country = 5;
	printf("%d\n",_country);
	printCountry(_country);
	return 0;
}