 int maxSubArray(int arr[], int n) {
    int max = arr[0], curr = arr[0];

    for(int i=1;i<n;i++) {
        curr = (arr[i] > curr+arr[i]) ? arr[i] : curr+arr[i];
        if(curr > max) max = curr;
    }
    return max;
}
