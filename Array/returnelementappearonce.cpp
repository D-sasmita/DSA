#include<iostream>
using namespace std;
int findUnique(int *arr,int size)
{
    int ans =0;
    for(int i=0;i<size;i++)
    {
        ans = ans ^ arr[i];//xor operation,it will cancel out the same element , a ^a =0, a^ 0=a
    }
    return ans;
}
int main()
{
    int arr[7]={2,3,6,1,3,6,2};
    int unique = findUnique(arr,7);
    cout<<unique<<endl;

}