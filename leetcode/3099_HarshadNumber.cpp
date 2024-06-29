// Easy - Math
/* Inside the loop, it calculates the remainder of temp divided by 10 using the modulo operator %. This gives the last digit of temp. 
It adds this digit to sumNumber.It then performs integer division of temp by 10 using the / operator. 
This effectively removes the last digit from temp. */
#include<bits/stdc++.h>
using namespace std;
int sumOfTheDigitsOfHarshadNumber(int x) 
{
    int sum=0;
    int temp=x;
    while(x>0){
        sum=sum+(x%10);
        x=x/10;
    }
    if(temp%sum==0){
        cout << sum;
        return sum;
    }
        cout << "-1";
        return -1;
}
int main()
{
    sumOfTheDigitsOfHarshadNumber(9841);
}