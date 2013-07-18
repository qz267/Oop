//
//  main.cpp
//  2012
//
//  Created by ZHENG QIN on 1/6/12.
//  Copyright (c) 2012 NYU. All rights reserved.
//

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
double  NUM[12]={1,1,1,2,2,2,3,4,4,5,6,7};
double  SUM=4;
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
    sort(NUM,12);
    for (int i=0; i<11; i++) {
        cout<<i<<"="<<NUM[i]<<endl;
    }
    back(NUM,12,0);
    return 0;
}

