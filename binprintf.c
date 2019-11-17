#include <stdio.h>
void binprintf(int x)
{
    unsigned int mask=1<<((sizeof(int)<<3)-1);
    while(mask) {
        printf("%d", (x&mask ? 1 : 0));
        mask >>= 1;
    }
}
int main()
{
    int x=100;
    binprintf(x);
}
