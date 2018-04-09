#include<stdio.h>
int main(void){
        int i;
        double num;
        for(i=0;i<7;i++){
                num = i/7;
                printf("%d/7 = %0.15lf\n",i,num);
        }
        return 0;

}