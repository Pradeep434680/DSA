#include<iostream>
using namespace std;
class maxHeap
{
    int *arr;
    int size;
    int total_size;
    public:

    maxHeap(int n)
    {
        arr= new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int val)
    {
        if(size == total_size)
        {
            cout<<"heap Overflow\n";
            return;
        }

        int index = size;
        arr[size]  = val;
        cout<<arr[size]<<" is inserted into the heap\n";
        size++;

        while(index > 0 &&arr[index]>arr[(index-1)/2])
        {
            
                swap(arr[index] ,arr[(index-1)/2]);
                index = (index-1)/2;
            
        }
    }

    void display()
    {
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};

int main()
{
    maxHeap H1(6);
    H1.insert(40);
    H1.insert(32);
    H1.insert(21);
    H1.insert(80);
    H1.insert(23);
    H1.insert(22);
    // H1.insert(245);

    H1.display();


}