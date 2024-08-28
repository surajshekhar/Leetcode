class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {



       //firstly calculating total sum of array
       int sum=0;
       for(int i=0;i<arr.size();i++)
       {
            sum+=arr[i];
       } 
       //checking is the sum value is multiple of 3
       if(sum%3!=0)
       {
        return false;
        //cannot be partition the array into three equal sum parts
       }
       //cout<<sum/3<<endl;
       //now fnding a better and clean approach
       //maintain two variables
       int curr_sum1=0,curr_sum2=0,partition_sum=sum/3;
       //consider the case if sum==0 and sum!=0
       bool falg=0;
       //using greedy approach
       int i=0,size=arr.size();
       for(i=0;i<size && falg==0;i++)
       {
         curr_sum1+=arr[i];
         if(curr_sum1==partition_sum)
         {
            //cout<<curr_sum1<<" "<<i<<endl;
            falg=1;
         }
       }
       //iterating till j=size-2 is like a mini check that partition is done for three [arts with eaula sum, this edge will be checked only when array sum is zero]
       for(int j=i;j<size-1;j++)
       {
        //cout<<curr_sum2<<" "<<j<<endl;
        curr_sum2+=arr[j];
       // cout<<curr_sum2<<endl;
        if(curr_sum2==partition_sum)
        {
            return true;
        }
       }

       //if nothing satisfies till now--> partition is not possible
       return false;

 }
};