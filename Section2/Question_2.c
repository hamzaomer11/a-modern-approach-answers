#include <stdio.h>

#define FRACTION (4.0f / 3.0f)
#define PI 3.14


int main(void)
{
  int radius;
  float volume;

  printf("Enter the radius of the sphere:  ");
  scanf("%d", &radius);
  volume = FRACTION * PI * radius * radius * radius;
  printf("Volume: %f\n", volume);



return 0;

}

