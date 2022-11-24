#include <stdio.h>
#include <math.h>



int isPrime(int x){
    if(x==0)
        return 0;
    for(int i=2;i<=sqrt(x);i++){
        if((x%i)==0){
            return 0;
        }
    }
        return 1;
}
int isStrong(int x){
    if(x==0)
        return 0;
    int temp=0;
    int sum=0;
    int num=x;
    while(num>0){
        temp=num%10;
        if(temp==0)
            sum=sum+1;
        else
            sum=sum+factorial(temp);
        num=num/10;
    }
    if(x==sum)
        return 1;

    return 0;
}
int factorial(int x){
    int fact=x;
    for(int i=x-1;i>0;i--){
        fact=fact*i;
    }
    return fact;
}
