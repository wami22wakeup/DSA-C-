class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        for(int i = b.size()-1; i>=0; i--)
        {
            if(a.back()>b[i])
            { 
                int last = a.back();
                int j = a.size()-2;
                while(j>=0 && a[j]>b[i])
                {
                    a[j+1] = a[j];
                    j--;
                }
                a[j+1] = b[i];
                b[i] = last;
        }
        }
    }
};
