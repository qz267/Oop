//
//  main.cpp
//  Mar_7th_MS
//
//  Created by ZHENG QIN on 3/7/12.
//  Copyright (c) 2012 NYU. All rights reserved.
//

#include<stdio.h>


int g = 0;



int Add(int i)
{ 
    static int s=0;
    s =s+i;
    g=g+i;
    return s;
}



int main()
{
    int s=0;int g=0,j;
    for(int i=1;i<=11;i++)
    {       g=0;s=0;  //why this s did not clear?
        j = Add(i);
    }
    printf("%d,%d",j,g);
    
    
    
    return 0;
}