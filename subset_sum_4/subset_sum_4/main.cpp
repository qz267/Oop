//
//  main.cpp
//  subset_sum_4
//
//  Created by ZHENG QIN on 11/17/11.
//  Copyright 2011 NYU. All rights reserved.
//

#include <stdio.h>

#define MAX_N  10
int W[MAX_N]={  3, -5, 14,  8, 17,  5,  6, -7, 23, 13 };
int T = 6;

// 判断子区间 [start,end] 是否满足 t1 或 t2
bool subset(int start,int end,int t1,int t2)
{
    if ( 0 == t1 )
    {
        return true;
    }
    
    if ( start == end )
    {
        return (W[start]==t1)||(W[start]==t2);
    }
    
    int t3,t4;
    t3 = t1 - W[end];
    t4 = t2 - W[end];
    
    if ( (t1 != t2)&&(t1 != t3) )
    {
        return ( subset(start,end-1,t1,t2) || subset(start,end-1,t3,t4) );
    }
    else
    {
        if ( t1 != t2 )
        {
            return subset(start,end-1,t1,t2);
        }
        else
        {
            return subset(start,end-1,t1,t3);
        }
    }
    
}

int main()
{
    printf("%s", (subset(0,MAX_N-1,T,T) ? "集合W存在这样的子集\n" : "集合W不存在这样的子集\n" ) );    
    return 0;
}