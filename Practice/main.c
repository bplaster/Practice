//
//  main.c
//  Practice
//
//  Created by Brandon Plaster on 7/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>

int main (int argc, const char * argv[])
{

    // insert code here...
    
    int total = 0;
    int n = 0;
    unsigned char running = 'A';
    while(running != 'B')
    {
        n++;
            int l = 5*n;
            if(l<1000)
            {
                total += l;
                printf("Total: %d \n", total);
            }
        if(n%5!=0)
        {
            int m = 3*n;
            if(m<1000)
            {
                total += m;
                printf("Total: %d \n", total);
            }
            else
            {
                running = 'B';
            }
        }
    }
    
    printf("Total: %d \n", total);
    return 0;
}

