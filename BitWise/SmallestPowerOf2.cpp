int nextP(int n)
{
  int count;
  if(n && !(n&(n-1)))
    return n;
  while(n!=0)
  {
    n>>=1;
    count++;
  }
  return (1<<count);
}
