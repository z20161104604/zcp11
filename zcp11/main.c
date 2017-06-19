
//
//  main.c
//  text2
//
//  Created by w20161104604 on 2017/6/13.
//  Copyright © 2017年 w20161104604. All rights reserved.
//

#include<stdio.h>

int main(int argc, const char * argv[])
{
    
    FILE *fa,*fb;
    fa=fopen("//Users//w20161104604//Desktop//text2//input.txt","a");
    fb=fopen("//Users//w20161104604//Desktop//text2//output.txt","b");
    int a[16];
    int q,w,e;
    if(fa==NULL)
    {
        printf("该文件不存在");
    }
    else
    {
        while(fscanf(fa,"%d",&q)!=EOF)
        {
            for(q=0; q<10; q++)
            {
                fscanf(fa,"%d",&a[q]);
            }
            
            for(w=0;w<9; w++)
            {
                for(q=0; q<9-w; q++)
                {
                    if(a[q]>a[q+1])
                    {
                        e=a[q];
                        a[q]=a[q+1];
                        a[q+1]=e;
                    }
                }
                
                
            }
            for(q=0;q<10;q++)
            {
                printf("%d ",a[q]);
                fprintf(fb,"%d ",a[q]);
            }
            fprintf(fb,"\n");
            printf("\n");
            
        }
        fclose(fa);
        fclose(fb);
    }
    
    return 0;
    
    
}