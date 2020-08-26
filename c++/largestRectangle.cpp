int Solution::largestRectangleArea(vector<int> &A) {
    
    stack<int> s;
    int i = 0;
    int tp;
    int maxArea = -1;
    int tpArea;
    int n = A.size();
    while( i < n){
        if(s.empty() || A[i] >= A[s.top()]){
            s.push(i++);
        } else {
            tp = s.top();
            s.pop();
            int area_with_top = A[tp] * (s.empty() ? i : i - s.top() - 1);
            if(area_with_top > maxArea){
                maxArea = area_with_top;
            }
        }
    }
    while(!s.empty()){
        tp = s.top();
        s.pop();
        int area_with_top = A[tp] * (s.empty() ? i : i - s.top() - 1);
            if(area_with_top > maxArea){
                maxArea = area_with_top;
            }
    }
    return maxArea;
}
