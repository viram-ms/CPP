int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int k=0;
    int n=A.size();
    int i=0;
    int itr = 0;
    if(n == 1){
        return 1;
    }
    while(i + 1 < n){
        if(A[i] == A[i+1]){
            A[k] = A[i];
            k += 1;
            A[k] = A[i+1];
            k +=1;
            i += 1;
            int temp = i;
            while(i + 1 < n && A[temp] == A[i+1]){
                i += 1;
            }
        } else {
            A[k] = A[i];
            k+=1;
        }
        i+=1;
    }
    
    if(k > 0 && A[k-1] != A[n-1]){
        A[k] = A[n-1];
        k+=1;
    }
    return k;
}
