#include <stdio.h>
#include <stdlib.h>
int main()
{long long length, width, flagstone;
long long stonesPerLength = (length + flagstone - 1) / flagstone;
long long stonesPerWidth = (width + flagstone - 1) / flagstone;
long long ans = stonesPerLength * stonesPerWidth;
printf("%lld", ans);
}
