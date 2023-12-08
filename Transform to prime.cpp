class Solution
{
    public:
    int minNumber(int arr[],int N)
    {
        int sum=0;
        int result=0;
        for(int i=0;i<N;i++){
            sum=sum+arr[i];
        }
        if(sum==1){
            return 1;
        }
       for(int i=2;i<=(sum+result)/2;i++){
           if((sum+result)%i==0){
               result++;
               i=2;
           }
       }
       return result;
    }
};
