#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height = get_int("Blocks: ");

  while(height < 1) {
    height = get_int("Blocks: ");
  }

  for (int i = 1; i <= height; i++) {

    for (int j = 1; j <= height - i; j++) {
      printf(" ");
    }

    for (int j = 0; j < i; j++) {
      printf("#");
    }

    printf("  ");

    for (int j = 0; j < i; j++) {
      printf("#");
    }

    printf("\n");
  }
}