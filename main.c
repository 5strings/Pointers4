//
//  main.c
//  PointersNArrays
//
//  Created by Eun Jae Lee on 28/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Access arrays through pointers

#include <stdio.h>

int main() {
    
    int a[5],i,sum=0;
    int *p;
    
    printf("Enter 5 elememts of the arry: \n");
    for (i=0; i<5; i++)
        scanf("%d",&a[i]);
    
    p = a;
    
    printf("Your 5 elements are: \n");
    for (i=0; i<5; i++) {
        printf("%d\n", *p);// will give value
        sum = sum + *p;// add value to sum variable
      //80
        p++; // increse address
    }
    
    printf("Total elements is %d\n",sum);
        
    getchar();
    
//    int a[5] = {10,20,30,40,50};
//    int *p;
//    p = &a[0]; // giving address a0 to p
//    p = a;
    
//    a[0]; // memory location
//    a[1];
//    a[2];
//    a[3];
//    a[4];
    
}
