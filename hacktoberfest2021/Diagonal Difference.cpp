//Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr){
    int sumR2L, sumL2R,ans; sumL2R=sumR2L=ans=0;
    int len=arr.size();
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j){sumL2R += arr[i][j];}
            if((i + j) == (len - 1)){sumR2L += arr[i][j];}
        }      
    }
    if(sumR2L>sumL2R){ans = sumR2L-sumL2R;}
    else if(sumR2L<sumL2R){ans = sumL2R-sumR2L;}
    else{ans=0;}
    return ans;   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
