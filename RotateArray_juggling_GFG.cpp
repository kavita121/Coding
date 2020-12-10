// Rotate Array 
#include<bits/stdc++.h>
using namespace std;

//Juggling algorithm

void rotateArr(int arr[], int d, int n)
{
    int size = __gcd(d, n);
    int divisions = n/size;
    
    for(int i=0; i<size; i++)
    {
        int temp = arr[i];
        int j=i;
        //Shifting
        while(1)
        {
            int k = (j+d)%n;
            if(k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        
        arr[j] = temp;
    }
}


int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}