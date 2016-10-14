#include <stdio.h>

void go_south_east(int *lon, int *lat)
{
	*lon = *lon - 1;
	*lat = *lat + 1;
}

int main()
{
	int longitude = 32;
	int lattitude = -64;
	
	go_south_east(&longitude, &lattitude);
	
	printf("\nCurrent position is: [%i, %i]",longitude, lattitude);
}