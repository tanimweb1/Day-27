#include<stdio.h>

int main(){


// CSE Lab class Day 1


// Ques 1 
int a,b,sum,sub,quotient,product,reminder;
scanf("%d%d",&a,&b);

sum = a+b;
sub = a-b;
quotient = a/b;
product = a*b;
reminder = a%b;
printf("sum %d\n",sum);
printf("sub %d\n",sub);
printf("quotient %d\n",quotient);
printf("reminder %d\n",reminder);
printf("product %d\n",product);



//ques 2
int l,w,area,para;
scanf("%d%d",&l,&w);

area = l*w;
para = 2*(l+w);

printf("area = %d\nparamteer = %d",area,para);



//ques 5

float a,b,c,si;
scanf("%f%f%f",&a,&b,&c);

si = (a*b*c)/100;
printf("Simple interest is %f",si);
    


    return 0;

}


