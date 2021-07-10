#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void primenumber(){
int i=1,j,s=0;
while(i<=1000){
for(j=2;j<=i/2;j++)
    if(i%j==0)
    break;
    if(j>i/2){
    printf("%d\n",i);
    s++;}
    i++;
}
printf("total=%d",s);
}
void array(){
int a;
int array [21] = {0};
array [0] = 0;
array [1] = 1;
array [2] = 1;
for (a=3;a<=20;a++)
array [a] = array [a-1] + array [a-2];
for (a= 1; a<= 20; a++)
printf("%d,",array[a]);
}
void PI(){
int f;
float pi=1,e=1;
f=1;
while(f<=50){
e=((2.0*f)/(2.0*f-1))*((2.0*f)/(2.0*f+1));
pi=pi*e;
f++;
}
pi=pi*2;
printf("%4.2f",pi);
}
void sum(){
int a,b,c,d,i;
printf("input the number do you want:");
scanf("%d",&a);
printf("input how many times will it repeated (the range is between 1 and 9):");
scanf("%d",&b);
if((b>=1)&&(b<=9)){
i=1;
c=0;
d=a;
while(i<b){
    c=c+d;
    d=d*10+a;
    i++;}
    d=d+c;
    printf("sum= %d",d);
}
else
    printf("the number is not between 1 and 9!");
}
int main(){
int n,r;
do{
printf("\n*********************************\n1.Prime number\n2.fibonacci array\n3.pi\n4.sum\n0.exit\n*********************************\nplease input the number here:");
scanf("%d",&n);
if(n==1){
    primenumber();
}
if(n==2){
    array();
}
if(n==3){
    PI();
}
if(n==4){
    sum();
}
if(n==0)
exit (0);
printf("\npress any number to continue or press 0 to exit ");
scanf("%d",&r);
}
while(r!=0);
return 0;}

