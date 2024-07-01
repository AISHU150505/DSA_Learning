


'''QUESTION : Definition:
Given an integer n, the task is to generate an n x n spiral matrix filled with numbers from 1 to n^2 in a spiral order.

A spiral matrix is a matrix arranged in a spiral pattern starting from the top-left corner and moving towards the center in a clockwise direction. 

My Approach:
Initialization: Start with an n x n matrix initialized with zeros.
Direction Management: Use directions (right, down, left, up) to control the movement in the matrix.
Boundary Management: Adjust boundaries after each traversal to avoid overlapping or revisiting cells.
Filling the Matrix: Fill the matrix in a spiral order until all elements are placed '''

"vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int>b;
        int n=a.size();
        int m=a[0].size();
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                b.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                b.push_back(a[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    b.push_back(a[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    b.push_back(a[i][left]);
                }
                left++;
            }
        }
        return b;
    }"
