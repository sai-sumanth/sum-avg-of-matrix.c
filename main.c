//
//  main.c
//  sum&avg of matrix
//
//  Created by sai sumanth on 5/26/18.
//  Copyright © 2018 sai sumanth. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[20][20],m,n,i,j,sum=0;
    float avg;
    printf("enter m values\n");
    scanf("%d",&m);
    printf("enter n values\n");
    scanf("%d",&n);
    for(i=0;i<=m-1;++i)
    {
       for(j=0;j<=n-1;++j)
       scanf("%d",&a[i][j]);
    }
    for(i=0;i<=m-1;++i)
    {
        for(j=0;j<=n-1;++j)
            sum=sum+a[i][j];
    }
    avg=sum/m*n;
    printf("sum=%d",sum);
    printf("avg=%f",avg);
}
