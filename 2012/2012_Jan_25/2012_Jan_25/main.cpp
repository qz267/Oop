//
//  main.cpp
//  2012_Jan_25
//
//  Created by ZHENG QIN on 1/25/12.
//  Copyright (c) 2012 NYU. All rights reserved.
//

#include <iostream>

# include <stdio.h>

int main()
{
    int max(int x,int y);
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d\n",c);
    return 0;
}
int max(int x, int y)
{
    int z;
    if(x>y)z=x;
    else z=y;
    return(z);
}

