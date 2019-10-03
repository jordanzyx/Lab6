#include <stdio.h>
#include "header.h"

int main() {
    FILE *infile = NULL;

    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab6\\input.txt","r");

    solve(infile);

    return 0;
}