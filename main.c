#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    long start = 1531389465; //time 12.07.18 11:55AM
    for(int i = 0; i < 100000; ++i)
    {
        ++start;
        srand(start);
        printf("%ld;", start);
        int r = rand();
        printf("%d;", r);
        for(int ii = 0; ii < 1000; ++ii)
            printf("%d;", rand());
        printf("%d\n", r % 49);
    }
}
