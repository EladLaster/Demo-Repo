#include <stdio.h>
#include "NumClass.h"

int main(){

    int a;
    int b;
   
    scanf ("%d %d", &a , &b);

    printf("The Armstrong numberes are");
    for(int i=a;i<=b;i++){
        if(isArmstrong(i))
        printf(" %d", i);
    }
    
      printf("\nThe Palindromes are");
    for(int i=a;i<=b;i++){
        if(isPalindrome(i))
        printf(" %d", i);
    }

       printf("\nThe Prime numberes are");
    for(int i=a;i<=b;i++){
        if(isPrime(i))
        printf(" %d", i);
    }

     printf("\nThe Strong numberes are");
    for(int i=a;i<=b;i++){
        if(isStrong(i))
        printf(" %d", i);
    }


    printf("\n");
    return 0;
}