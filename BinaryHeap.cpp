// implementing binary Heap using array 

#include<bits/stdc++.h>
    
using namespace std;

void heapify(vector<int> &heap, int i)
{
    int largest = i;
    int left = 2*i + 1, right = 2*i + 2;

    if(left < heap.size() && heap[left] > heap[i])
        largest = left;
    
    if(right < heap.size() && heap[right] > heap[i])
        largest = right;

    if(i != largest)
    {
        swap(heap[i], heap[largest]);
        heapify(heap, largest);
    }
}

void heapSort(vector<int> heap)
{
    for(int i=n-1; i>=0; i--)
    {
        swap(heap[0], heap[i]);
        heapify(heap, 0);
    }
}

int main()
{
    int n;

    cin>>n;
    vector<int> heap(n);

    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    // Build a max heap out of this given array
    for(int i=n/2 - 1; i >= 0; i--)
    {
        heapify(heap, i);
    }

    // To sort the array using heap sort
    heapSort(heap);
    return 0;
}