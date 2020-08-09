#include <stdio.h>
#include <cs50.h>

void getHeightFromUser(void);
void printPyramids(void);
void printFirstPyramidOnRow(int row);
void printSecondPyramidOnRow(int row);

int height;

int main(void)
{
  getHeightFromUser();
  printPyramids();
}

void getHeightFromUser(void)
{
  do
  {
      height = get_int("Height: ");
  }
  while (height < 1 || height > 8);
}

void printPyramids(void)
{
  for (int i = 1; i < height + 1; i++)
  {
    printFirstPyramidOnRow(i);
    printf("  ");
    printSecondPyramidOnRow(i);
    printf("\n");
  }
}

void printFirstPyramidOnRow(int row)
{
  for (int j = height; j > 0; j--)
  {
      (j > row) ? printf(" ") : printf("#");
  }
}

void printSecondPyramidOnRow(int row)
{
  for (int j = 0; j < row; j++)
  {
      printf("#");
  }
}
