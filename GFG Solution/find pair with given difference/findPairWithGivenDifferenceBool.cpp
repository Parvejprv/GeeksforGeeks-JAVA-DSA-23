bool findPair(int arr[], int size, int n){
    
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr, arr+size);
    
    // Display the vector elements after sorted
    // for(int i=0; i<size;i++){
    //     cout << arr[i] << " ";
    // }
    
    // int start = 0, end = n-1;
    int start, end;
    
    for(int i=0; i<size-1; i++){
        int target = arr[i] + n;
        
        // Reset the start and end
        start = i+1, end = size-1;
        
        while(start <= end){
            int mid = end + (start-end)/2;
            
            if(arr[mid] == target){
                return true;
            } else if (arr[mid] < target){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return false;
    
}