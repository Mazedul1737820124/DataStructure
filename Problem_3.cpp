#include<iostream>
using namespace std;

int main()
{
    
    int n, i, arr[50], Item, BEG = 0, END, middle,temp;
    cout<<"Enter your Range:";
    cin>>n;
    cout<<"Enter "<<n<<" elements :";
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for (int j = 0; j < n - 1  ; ++j) {
        for (int i = 0; i <  (n -1)- j ; ++i) {

            if(arr[i]  > arr[i + 1]){

                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }


    cout<<"Sorted elements : ";

    for (int k = 0; k < n ; ++k) {
        cout<<arr[k]<<" ";

    }

    cout<<"\nEnter an element to find :";
    cin>>Item;
    END = n -1;
    middle = (BEG + END)/2;


    while (BEG <= END)
    {

        if(arr[middle] == Item)
        {
            cout<<Item<<" found at location "<<middle+1<<"\n";
            break;
        }
        else if(arr[middle] < Item)
        {
            BEG = middle + 1;

        }

        else
        {
            END = middle - 1;
        }

        middle = (BEG + END)/2;
    }

    if(BEG > END)
    {
        cout<<"Not found! "<<Item<<" is not present in the list.";
    }

    return 0;
}

/* WAP to search an item in an array using binary search.
   Mazedul islam
   Dept : CSE
   Year : 2nd */