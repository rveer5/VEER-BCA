// In number theory, a perfect number is a positive integer that is equal to the sum of its positive divisors,
// excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, 
// so 6 is a perfect number. The next perfect number is 28, since 1 + 2 + 4 + 7 + 14 = 28.

// OR

// sum of factors of any n number is equal to n*2  , then it is a perfect number 
// ex= factors of 6 =1,2,3,6   then sum of all these factors =12  , if 12 is equal to 6*2 that is 12 than it is a perfect number 

// 6 is a perfecct number
// 28 is a perfect number

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a number :";
    cin>>n;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        sum+=i;
    }
}
cout<<sum<<" is the sum of all factors upto "<<n<<"\n";


if(sum==n*2)
cout<<n<<" is a perfect number.";

return 0;

}
