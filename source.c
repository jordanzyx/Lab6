//
// Created by Jordan on 10/3/2019.
//
#include <stdio.h>
#include "header.h"


void solve(FILE *infile){
    int sum = 0;
    int digitSum = 0;

    while(!feof(infile)){
        int val = readIntegerFromFile(infile);
        sum += val;
        digitSum += getSumOfDigits(val);
    }

    int a = isIntegerPrime(sum);
    int b = isIntegerPrime(digitSum);


    printResults(a,b);

    fclose(infile);
}

int getSumOfDigits(int value){
    int temp = value;
    int sum = 0;
    while (temp!= 0){
        value = temp % 10;
        sum += value;
        temp /= 10;
    }
    return sum;
}

int readIntegerFromFile(FILE *infile){
    int val = 0;
    fscanf(infile,"%d",&val);
    return val;
}
int isIntegerPrime(int val){
    if(val * -1 > 0)val = -val;
    for(int i = 2; i < val; i++){
        if(val % i == 0)return -1;
    }
    return 1;
}

void printResults(int a,int b){
    if(a == 1)printf("The sum of the integers is prime\n");
    else printf("The sum of the integers is not prime\n");

    if(b == 1)printf("The sum of the integer's digits is prime\n");
    else printf("The sum of the integer's digits is not prime\n");
}