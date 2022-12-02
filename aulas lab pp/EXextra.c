

#include <stdio.h>
#include <string.h>
 
int main () 
{
  char str[1000];
  char fim[1000];
  int i, j, k;
  char c;

  printf ("Digite um frase: ");
  fgets (str, 1000, stdin);
   
  j = 0;
  k = strlen(str);

  for(i = 0; i < k; i++)
  {
    if(str[i] == 'r' && str[i+1] >= 'a' && str[i+1] <= 'z')
    {
      c = 'l';

      if(str[i+1] == 'r')
      {
        i++;
      }
    }
    else
    {
      c = str[i];
    }
 
    fim[j] = c;
    j++;
  
  }

  fim[j] = '\0';
 
  printf("Traducao: %s\n", fim);
   
  return 0;
}