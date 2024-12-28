#include <iostream>
#include <stdbool.h>
#include <vector>
using namespace std;

bool isSame(vector <int> vec)
{
    int s = vec.at(0);
    
    for (int i = 0;i<vec.size();i++)
    {
        if(vec.at(i) != s)
        {
            return false;
        }
    }
    return true;
}
int minimum(vector <int> vec)
{
    int min = vec.at(0);
    
    for (int i = 0;i<vec.size();i++)
    {
        if (vec.at(i) < min)
        {
            min = vec.at(i);
        }
    }
    return min;
}

void display(vector <int> vec)
{
    for (int i = 0;i<vec.size();i++)
    {
        if(i == vec.size() - 1)
        {
            printf("%d\n",vec.at(i));
        }
        else
        {
            printf("%d, ",vec.at(i));
        }
    }
}
int main()
{
    int n,data,max1,max2,c = 0;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;
    
    if (n <= 0)
    {
        while (c != 1)
        {
            cout<<"Invalid Array size enter a valid size"<<endl;
            cin>>n;
            
            if(n >= 1)
            {
                c = 1;
            }
            else
            {
                c = 0;
            }
        }
    }
    
    vector <int> vec1;
    for (int i = 0;i<n;i++)
    {
        cout<<"Enter the "<<i + 1<<" element of your array"<<endl;
        cin>>data;
        
        vec1.push_back(data);
    }
    
    if(isSame(vec1))
    {
        cout<<"The Initial array is: ";
        display(vec1);
        cout<<"The second largest element is -1"<<endl;
    }
    else if(n == 1)
    {
        cout<<"The Initial array is: ";
        display(vec1);
        cout<<"The second largest element is -1"<<endl;
    }
    else
    {
        cout<<"The Initial array is: ";
        display(vec1);
    
    max1 = minimum(vec1);
    max2 = minimum(vec1);
    
    for (int i = 0;i<vec1.size();i++)
    {
        if(vec1.at(i) > max1)
        {
            max1 = vec1.at(i);
        }
    }
    
    for (int i = 0;i<vec1.size();i++)
    {
        if (vec1.at(i) > max2 && vec1.at(i) != max1)
        {
            max2 = vec1.at(i);
        }
    }
    
    cout<<"The second largest element is "<<max2<<endl;
     }
    
    return 0;
}