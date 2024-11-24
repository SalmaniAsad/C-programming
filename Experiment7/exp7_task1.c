/* AIM: WAP to find the largest element in an array & WAP to calculate sum of two matrix.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/
#include<stdio.h>

int main()
{
  int n,i,a[100],large;
  printf("Enter the number of elements = ");
  scanf("%d",&n);

  for(i=0;i<=n-1;i++)
  {
      printf("Enter a value = ");
      scanf("%d",&a[i]);
  }

  large=a[0];
  for(i=1;i<=n-1;i++)
  {
      if(large<a[i])
        large=a[i];
  }
  printf("The largest number is %d",large);
  return 0;
}
/*          OUTPUT

    Enter the number of elements = 5
    Enter a value = 10
    Enter a value = 20
    Enter a value = 50
    Enter a value = 60
    Enter a value = 70
    The largest number is 70
*/
