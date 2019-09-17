#include<iostream>
#include<cmath>


void primefactors(int n)
{
    int flag = 0;
    for(int i = 2; i<= sqrt(n) ; i++)
        if(n%i == 0)
        {
            flag = 1;
            break;
        }
            
    if(flag == 0 && n != 1)
        std::cout<<"Prime"<<'\n';
    else
        std::cout<<"Not Prime\n";
}

int main()
{
    int t,n;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        primefactors(n);
    }
    
    return 0;
}
