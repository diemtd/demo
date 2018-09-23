#include <stdio.h>

int fibonaci(int s){
	if(s==0||s==1) return 1;
	else
		return (fibonaci(s-2)+fibonaci(s-1));
}

int main()
{
  int a;

  printf("Enter an integer\n");
  scanf("%d", &a);
  printf("F(%d): %d", a, fibonaci(a));
  return 0;
}


