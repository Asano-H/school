#include<stdio.h>
enum country {USA,UK,Japan,France,China};

void printCountry(enum country c){
	switch(c){
		case USA:printf("�A�����J\n");break;
		case UK:printf("�C�M���X\n");break;
		case Japan:printf("���{\n");break;
		case France:printf("�t�����X\n");break;
		case China:printf("����\n");break;
	}
}
int main(void){
	enum country _country;
	_country = 5;
	printf("%d\n",_country);
	printCountry(_country);
	return 0;
}