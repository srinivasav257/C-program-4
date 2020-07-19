int main()
{
    int n,i,temp=9,rem;
    printf("enter the integer number:");
    scanf("%d",&i);
     while(n)
      {
        rem=n%10;
        if(rem>temp)
          break;
        temp=rem;
        n=n/10;
      }
     if(n==0)
     {
         printf(" %d is sorted ",i);
     }
     else
    { 
        printf("%d is not sorted",i);
    }
    return 0;
}
