
#include <stdio.h>
#include <tchar.h>
#include "panel.h"

int main()
{
if (!AgingLCDDisplay())
{
printf("LCD BrightLess error \n");
}

printf("end.\n");

return 0;
}
