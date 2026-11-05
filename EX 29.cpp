#include <stdio.h>

int main()
{
    int rate=1024;
    int capacity=576;
    int lane=64;
    int total=1600;
    int rateLanes=rate/lane;
    int capacityLanes=capacity/lane;
    int i;

    printf("SHA-3 Block Size: %d bits\n",rate);
    printf("Rate Lanes: %d\n",rateLanes);
    printf("Capacity Lanes: %d\n",capacityLanes);

    printf("\nInitial Capacity Lanes: All Zero\n");

    for(i=1;i<=capacityLanes;i++)
        printf("After block %d: Capacity lane %d receives data\n",
               i,i);

    printf("\nAll capacity lanes become non-zero after 9 blocks.\n");

    return 0;
}
