#include<iostream>
using namespace std;
int main()
{
   srand(time(NULL));

// Generate three different random numbers
int a = rand()%(20-10+1)+10; // 0-> 2^32-1 == 65535
int b = rand();
int c = rand();
cout<<a<<" "<<b;
    return 0;
}