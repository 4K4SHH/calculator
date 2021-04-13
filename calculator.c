#include<stdio.h>
void main()
{
  printf("calculator \n********************\n");
  int n;
  float a,b,s,d,m,k;
  printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
  printf("Enter your choice: ");
  scanf("%d",&n);
  printf("Enter Two number: ");
  scanf("%f%f",&a,&b);
  switch (n)
  {
    case 1:
        s=a+b;
        printf("sum=%f",s);
        break;
    case 2:
        d=a-b;
        printf("difference=%f",d);
        break;
    case 3:
        m=a*b;
        printf("product=%f",m);
        break;
    case 4:
        k=a/b;
        printf("quotient=%f",k);
        break;
    default:
        printf("Invalid choice\n");
  }
  printf("\n");
}
