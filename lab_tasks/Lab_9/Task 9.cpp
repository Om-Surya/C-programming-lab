#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return a/b;}

int main(){
    int x=8,y=2,o=3;
    int (*p)(int,int);
    if(o==1)p=add;
    else if(o==2)p=sub;
    else if(o==3)p=mul;
    else p=divi;
    printf("%d\n",p(x,y));
}

