#include<bits/stdc++.h>
using namespace std;

void copyset(insigned &x,unsigned y,unsigned l,unsigned r)
{
  int maskLength = (1<<(r-l+1)) - 1;
  int mask = ((maskLength)<<(l-1))&y;
  x|=mask;
}
