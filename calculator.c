#include<stdio.h>
#include<assert.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
int factorial(int a)
{
    int i,value=1;
    for(i=1;i<a;i++)
     a=a*i;
    value=a;
    return value;
}

int main()
{
    int x,y;
    assert(10==add(6,4));
    printf("\naddition for both positive number succesful");
    assert(-10==add(-6,-4));
    printf("\naddition for both negetive number succesful");
    assert(-10==add(-20,10));
    printf("\naddition for one positive and one negetive number succesful");
    assert(10==sub(20,10));
    printf("\nsubtraaction for two positive number succesful");
    assert(0==sub(-10,-10));
    printf("\nsubtraaction for two negetive number succesful");
    assert(10==sub(-10,-20));
    printf("\nsubtraaction for one positive and one negetive number succesful");
    assert(10==mul(5,2));
    printf("\nmultiplication for both positive number succesful");
    assert(10==mul(-5,-2));
    printf("\nmultiplication for both negetive number succesful");
    assert(-10==mul(-5,2));
    printf("\nmultiplication for one positive and one negetive number succesful");
    assert(10==divide(100,10));
    printf("\ndivision for both positive number succesful");
    assert(10==divide(-100,-10));
    printf("\ndivision for both negetive number succesful");
    assert(-10==divide(-100,10));
    printf("\ndivision for one positive and one negetive number succesful");
    assert(2==factorial(2));
    printf("\nfacorial successful");
    return 0;
   }
