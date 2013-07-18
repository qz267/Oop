/*
 * main.cpp
 *
 *  Created on: Jan 6, 2012
 *      Author: zhengqin
 */




//
//  main.cpp
//  Subset sum
//
//  Created by ZHENG QIN on 11/17/11.
//  Copyright 2011 NYU. All rights reserved.
//


#include <iostream>
#include <list>
using namespace std;
double  NUM[9]={-4,-2,8,-7,9,-6,3,5,-1};
double  SUM=8;
double  DATA=0;
double  is_not[9]={0,0,0,0,0};


void sort(double *p,double n)  //select sort the array
{
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(p[j]<p[i])
            {
                double tmp=p[i];
                p[i]=p[j];
                p[j]=tmp;
            }
        }
    }
}

void back(double *p , double n, int i)
{
    if(DATA==SUM)
    {
        for(int j=0;j<n;++j)
        {
            if(is_not[j]==1)
            {
                cout<<NUM[j]<<"  ";
            }
        }
        cout<<endl;
    }
    else
    {
        if(DATA+p[i]<=SUM)
        {
            for(int flag=1;flag>=0;--flag)
            {
                if(flag==1)
                {
                    DATA+=NUM[i];
                    is_not[i]=1;
                }
                else
                {
                    DATA-=NUM[i];
                    is_not[i]=0;
                }
                back(p,n,i+1);
            }
        }
    }
}

int main()
{
    sort(NUM,9);
    for (int i=0; i<8; i++) {
        cout<<i<<"="<<NUM[i]<<endl;
    }
    back(NUM,9,0);
    return 0;
}
