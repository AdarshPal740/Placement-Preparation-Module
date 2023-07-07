class Solution {
public:
    void sortColors(vector<int>& arr) {
       int c0=0,c1=0,c2=0;
   for(int i=0;i<arr.size();i++){
       if(arr[i]==0){
           c0++;
       }
       else if(arr[i]==1){
           c1++;
       }
       else{
           c2++;
       }
   }
   int k=0;
   while(c0--){
    arr[k]=0;
    k++;
   }
   while(c1--){
    arr[k]=1;
    k++;
   }
   while(c2--){
    arr[k]=2;
    k++;
   }
    }
};