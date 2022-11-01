  int median(vector<vector<int>> &matrix, int R, int C){
        int n= R*C;
        int arr[n], k=0;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                arr[k]= matrix[i][j];
                k++;
            }
        }
        sort(arr,arr+n);
        return arr[n/2];
    }
