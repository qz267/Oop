//
//  main.cpp
//  test
//
//  Created by ZHENG QIN on 1/25/12.
//  Copyright (c) 2012 NYU. All rights reserved.
//
#include <iostream.h>
# include <stdio.h>
int max(int ,int);


int main()
{
    int max(int x,int y);
    int a,b,c;
    cin >>a>>b;
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