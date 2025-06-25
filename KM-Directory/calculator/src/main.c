#include <stdio.h>
#include "../inc/add.h"
#include "../inc/sub.h"

int main()
{
int p,m;

#ifdef ADD
p=add(5,4);
printf("add result: %d\n",p);
#endif

#ifdef SUB
m=sub(5,4);
printf("sub result: %d\n",m);
#endif

return 0;
}
