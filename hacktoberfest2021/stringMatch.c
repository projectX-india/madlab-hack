#include<stdio.h>
#include<string.h>
 
int main()
{
      int str_len, pat_len, j, i, count = 0;
      int flag=0,ind=-1;
      char str[30], pattern[30] ;
      printf("\nEnter a String:");
      scanf("%s", str);
      printf("\nEnter a Pattern to Match:");
      scanf("%s", pattern);
      str_len = strlen(str);
      pat_len = strlen(pattern);
      
      for(i = 0; i <= str_len - pat_len; i++)
      {
            for(j = 0; j < pat_len; j++)
            {
                  if(str[i + j] == pattern[j]) count++;
            }
            if(count == pat_len)
            {     ind = i;
                  flag=1;
                  break;
            }

            count = 0;
      }
      if(flag){
          printf("\nPattern Matched at Position: %d",ind);
          
      }
      else{
          printf("\nPattern not found");
      }
      printf("\n");
      return 0;
}
