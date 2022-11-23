#include <stdio.h>
#include <math.h>


int isArmstrong(int num){
    int y = num;
    int digitcount =digitcounter(num);
    if(isArmstrong2(num,digitcount)==num)
        return 1;
    
        return 0;     
}

int digitcounter(int num){
    if(num==0)
    return 0;
    
    return (1+digitcounter(num/10));

}
int isArmstrong2(int num, int digitcount){
    if(num == 0 ){
        return 0;
    }
    int y = num%10;
    return (int)(pow(y,digitcount)+isArmstrong2(num/10,digitcount));
}

int isPalindrome(int num){
    int digitcount= digitcounter(num);
    int reversenum = reverse(num, digitcount);
    if(reversenum==num)
        return 1;
    
        return 0;
}
int reverse(int num, int digitcount){
   
    if(digitcount==0)
        return 0;
        
        return (int)((num%10)*pow(10,(digitcount-1)) +reverse(num/10,(digitcount-1)))   ;
}