#include <stdio.h>

int main(void)
{
    int n, m, m1, n1;
    
    printf(" Write two numbers\n");
    scanf("%i %i",&n, &m);

      printf("This is:\n");
      n1=n;m1=m;
      printf("%i\n",--m1-++n1 );
    
        n1=n; m1=m;
        printf("%s\n", (m1*n)<n1++?"True":"False");
    
          n1=n; m1=m;
          printf("%s\n", n1-->m1++?"True":"False");
    
    return 0;
}

