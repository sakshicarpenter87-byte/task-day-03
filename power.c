#include<stdio.h>
int main (){
    int a,b,res=1;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){ 
res=res*a;

}
printf("result is %d",res);
}
