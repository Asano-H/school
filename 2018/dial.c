#include<stdio.h>
int main(void){
        int i,num;
        for(i=1;i<8;i++){
                num=142857*i;
                printf("142857 × %d = %d\n",i,num);
        }
        return 0;
}