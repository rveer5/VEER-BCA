// #include<iostream>
// using namespace std;
// int fun(int n)
// {
//     if(n==0)
//     return 0;
//     else
//     {
//         cout<<n<<"\n";
//         fun(n-1);
//     }

// }
// int main()
// {
//     int num=5;
//     fun(num);

// }

// #include<iostream>
// using namespace std;
// int fun(int n)
// {
//     if(n<5)
//     {
//         cout<<n<<"\n";
//         n++;
//         fun(n);
//     }
    
// }
// int main()
// {
//     int num=1;
//     fun(num);
// }


// another method below . achieving same output
#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0){
        return 0;
    }
    fun(n-1);
    cout<<n<<endl;
}
int main(){
    fun(5);
}




