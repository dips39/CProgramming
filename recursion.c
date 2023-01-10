#include<stdio.h>
#include<string.h>
int rec(int,int);
void main(){
    int n,p;
    printf ("enter the no and power");
    scanf("%d %d",&n,&p);
    int a=rec(n,p);
    printf ("The power of a no is %d",a);

}
        int rec (int no,int power){
            if (power==0)
            return 1;
            else;
            return(no*rec(no,power-1));
        }