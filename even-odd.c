#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num%2==0){
        printf("%d:this number is even.",num);
    }
    else {
        printf("%d:this number is odd.",num);
    }
}
