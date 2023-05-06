#include<iostream>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;

        heap()
        {
            arr[0] = -1;
            size = 0;
        }

    void insert(int val)
    {

            //increasing size to insert value
            size = size + 1;

            //creating index to track last value
            int index = size;

            //inserting value
            arr[index] = val;

            //finding parent index
            int parent = index / 2;

            while(index > 1)
            {
                //comparing the inserted value with parent to satisfy max heap property
                if(arr[parent] < arr[index])
                {
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else
                {
                    return;
                }
            }
    }

    void print()
    {
            
            for (int i = 1; i <= size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
    }

    void deleteheap()
    {
        //if heap is empty
        if(size == 0)
        {
                cout << "heap empty cant delete" << endl;
                return;
        }

        // swap last values
        arr[1] = arr[size];
        size--;

        // propagating the value to correct postion
        int i = 1;
        while(i < size)
        {
                int leftchild = 2 * i;
                int rightchild = 2 * i + 1;

                if(leftchild < size && arr[leftchild] > arr[i])
                {
                    swap(arr[leftchild], arr[i]);
                    i = leftchild;
                }
                else if (rightchild < size && arr[rightchild] > arr[i])
                {
                    swap(arr[rightchild], arr[i]);
                    i = rightchild;
                }
                else{
                    return;
                }
        }
    }
};

int main()
{
    heap h;
    h.insert(12);
    h.insert(14);
    h.insert(18);
    h.insert(11);
    h.insert(10);
    h.insert(9);
    h.print();
    h.deleteheap();
    h.print();
    h.insert(12);
    h.insert(14);
    h.insert(18);
    h.insert(11);
    h.insert(10);
    h.insert(9);
    h.print();
}