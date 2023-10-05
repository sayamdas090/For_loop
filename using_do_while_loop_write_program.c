#include<stdio.h>
int main(){
    int n, name=0;
    printf("Enter the number of time to dispaly your name:");
    scanf("%d",&n);
    do
    {
        printf("SAYAM:\n");
        name++;
    } while (name<n);
    
    return 0;
}