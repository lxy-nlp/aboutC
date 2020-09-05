#include<stdio.h>
int main()
{
    char phase[5] = {"TA"};
    snprintf(phase, sizeof(phase), "%s", "CLL");
    printf("phase = %s",phase);
}