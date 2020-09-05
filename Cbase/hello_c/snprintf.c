//
// Created by lxy on 2020/7/27.
//
#include<stdio.h>
int main()
{
    char phase[5] = {"TA"};
    snprintf(phase, sizeof(phase), "%s", "CLL");
    printf("phase = %s",phase);
}

