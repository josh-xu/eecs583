#include <stdio.h>

int main()
{

  int in[1000]; 
  int i,j,k;
  FILE* myfile;

  for (i = 0; i < 1000; i++)
  {
    in[i] = 0;
  }   

  for (j = 100; j < 1000; j++)
  {
   in[j]+= 10;
  }

  for (k = 0; k < 1000; k++) {
    if (k % 2 == 0)
      in[k] = 0;
    else
      in[k] = 1;
  }
  
  for (i = 0; i< 1000; i++)
    fprintf(stdout,"%d\n", in[i]);
  
  return 1;
}

