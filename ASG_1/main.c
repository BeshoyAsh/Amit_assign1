#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x;
    unsigned char y;
    unsigned char z;
    printf("Please enter your number: ");
    scanf("%d",&x);
    y=x<<7; // shifting all left bits
    z=y>>7; // shifting the existing byte to see if the bit 1 is 0 or 1
    // if the first bit is 0 so the number is odd
    // if the first bit is 1 so the number is even
    printf("The number is odd: %d\n",z);
    printf("The number is even: %d\n",!z);
    return 0;
}
