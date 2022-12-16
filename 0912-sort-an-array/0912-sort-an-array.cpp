// BULLSHIT I JUST FORGOT WC TC OF QS IS n^2 AND WASTED 2HRS
class Solution {
public:
   vector<int> sortArray(vector<int>& nums) {
     int n= nums.size()-1;
     merge_sort(nums,0,n);
     return nums;
  }
  void merge_sort(vector<int>& nums,int p,int q){
    if(p>=q)return;
      int mid = p+(q-p)/2;
      merge_sort(nums,p,mid);
      merge_sort(nums,mid+1,q);
      merge(nums,p,mid,q);
  }
  void merge(vector<int>& nums, int p, int mid,int q){
    vector<int> temp(q-p+1);
    int i=p,j=mid+1,k=0;
    while(i<=mid && j<=q){
      if(nums[i]<=nums[j]){
        temp[k++] = nums[i++];
      }
      else{
        temp[k++]=nums[j++];
      }
    }
    while(i<=mid){
      temp[k++]=nums[i++];
    }
    while(j<=q){
      temp[k++]=nums[j++];
    }
    int m=0;
    for(int i=0;i<k;i++){
      nums[p+i]=temp[i];
    }
  }
  };
//QUICK SORT
  // void fun(vector<int>& nums,int p, int q){
  //    if(p<q){
  //    int mid = partition(nums,p,q);
  //    fun(nums,p,mid-1);
  //    fun(nums,mid+1,q);
  //    }
  // }
  //   int partition(vector<int>& nums,int p,int q){
  //     int pivot = nums[q]; //last element
  //     int i= p-1;
  //     for(int j=p;j<=q-1;j++){
  //       if(nums[j]<pivot){
  //         i=i+1;
  //         swap(nums[i],nums[j]);
  //       }
  //     }
  //     i=i+1;
  //     swap(nums[i],nums[q]);
  //     return i;
  //   }
// RECURSION
//     vector<int> sortArray(vector<int>& nums) {
//       int n=nums.size()-1;
//         fun(nums);
//        return nums;
//     }
//    void fun(vector<int>& nums){
//      if(nums.size()==1){
//        return;
//      }
//      int temp= nums[nums.size()-1];
//      nums.pop_back();
//      fun(nums);
//      insert(nums,temp);
//    }
//   void insert(vector<int>& nums,int temp){
//      if(nums.size()==0||nums[nums.size()-1]<= temp){
//        nums.push_back(temp);
//       return; 
//      }
//      else{
//       int val=  nums[nums.size()-1];
//        nums.pop_back();
//        insert(nums,temp);
//        nums.push_back(val);
//        return;
//      }