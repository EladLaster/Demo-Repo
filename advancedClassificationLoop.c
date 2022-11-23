#include <stdio.h>
#include <math.h>

int isArmstrong(int num){
    if(isArmstrong2(num)==num)
        return 1;
   
        return 0;
}

int digitcounter(int num){
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    return count;
}

int isArmstrong2(int num){
    int y;
    int sum=0;
    int digitcount =digitcounter(num);
    while(num>0){
        y=num%10;
        sum=sum+(int)pow(y,digitcount);
        num=num/10;
    }
    return sum;
}

int isPalindrome(int num){
    if(reverse(num)==num)
        return 1;
    
        return 0;

}

int reverse(int num){
    int y;
    int newnum=0;
    int digitcount =digitcounter(num);
    while(num>0){
        y=num%10;
        newnum=newnum+(int)(y*pow(10,digitcount-1));
        num=num/10;
        digitcount--;
    }
    return newnum;
}
