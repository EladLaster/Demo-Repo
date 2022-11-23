#include <stdio.h>
#include <math.h>



int isPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if((x%i)==0){
            return 0;
        }
    }
        return 1;
}
int isStrong(int x){
    int temp=0;
    int sum=0;
    while(x>0){
        temp=x%10;
        sum=sum+factorial(temp);
        x=x/10;
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