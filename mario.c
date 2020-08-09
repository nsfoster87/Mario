#include <stdio.h>
#include <cs50.h>

void getHeightFromUser(void);
void printPyramid(void);
void printHashesInRow(int row);

int height;

int main(void)
{
    getHeightFromUser();
    printPyramid();
}

void getHeightFromUser(void)
{
  do
  {
      height = get_int("Height: ");
  }
  while (height < 1 || height > 8);
}

void printPyramid();
{
  for (int i = 1; i < height + 1; i++)
  {
      printHashesInRow(i);
      printf("\n");
  }
}

void printHashesInRow(int row)
{
  // print " " counting down from j
  // when j equals row number (i) switch from " " to "#"
  for (int j = height; j > 0; j--)
  {
      (j > row) ? printf(" "); : printf("#");
  }
}
