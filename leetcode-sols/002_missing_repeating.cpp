class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
        int n = arr.size();
        int xor_1 = 0;
        for(int i=0; i<n; i++){
            xor_1 ^= arr[i];
            xor_1 ^= (i+1); //XOR elements of array
        }
         
        /*set a rightmost bit to find out missing and repeating 
        number because xor_1 = missing ^ repeating */
        
        int set_bit = xor_1 & ~(xor_1-1);
        // now make two buckets to find out the two numbers
        int x =0, y=0;
        for(int i =0; i<n; i++)
        {
            if(arr[i] & set_bit)
                x^=arr[i];
            else
                y^=arr[i];
            if((i+1) & set_bit)
                x^=(i+1);
            else
                y^=(i+1);
        }
        
        //find which number is which
        int repeating =0 , missing =0;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i]==x)
            {
                repeating = x;
                missing = y;
                break;
            }
            else if(arr[i]==y)
            {
                repeating = y;
                missing = x;
                break;
            }
        }
         return {repeating, missing};
        
    }
};
