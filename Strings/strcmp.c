#include <stdio.h>
#include <string.h>

int main() {
    
      char st1[45] = "Hel";
      char *st2 = "Hello";
      int val = strcmp(st1,st2);
      printf("Now the val is %d\n",val);

    return 0;
}