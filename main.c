#include<stdio.h>
#include<math.h>

// This is a git and github demo

int main(int argc, char** argv){

    int N=10;
    int i, k;
    
    for(i=0;i<N;i++) {
        for(k=0;k<i;k++) printf("*"); 
        printf("\n");  
    } 

    return 0;

}
