int requiredPainters(vector<int>& C, long long mid, int painters, int B){
    int numPainters = 1;
    long long int total = 0;
    int n = C.size();
    for(int i=0;i<n;i++){
        total = total +  C[i];
        
        if(total > mid){
            numPainters++;
            total = C[i];
        }
    }
    return numPainters;
}



int Solution::paint(int A, int B, vector<int> &C) {
    
    long long int minValue = C[0];
    int n = C.size();
    for(int i=1;i<n;i++){
        if(C[i] > minValue){
            minValue = C[i];
        }
    }
    
    long long int maxValue = 0;
    for(int i=0;i<n;i++){
        maxValue = maxValue +  C[i];
    }
    
    while(minValue < maxValue){
        
        long long int mid = minValue + (maxValue - minValue) / 2;
        int painters = requiredPainters(C, mid, A,B);
        
        if(painters <= A){
            maxValue = mid;
        } else {
            minValue = mid + 1;
        }
    }
    return (minValue * B) % 10000003;
}
