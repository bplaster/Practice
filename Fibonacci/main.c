//
//  main.c
//  Fibonacci
//
//  Created by Brandon Plaster on 7/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    int a = 0;
    int b = 1;
    int c = 0;
    int total = 0;
    
    while((a | b | c)<4000000)
    {
        c = a+b;
        if(c%2 && c < 4000000) total += c;
        b = a+c;
        if(b%2 && b < 4000000) total += b;
        a = b+c;
        if(a%2 && a < 4000000) total += a;  
    }
    printf("total: %d \n", total);
    return 0;
}

