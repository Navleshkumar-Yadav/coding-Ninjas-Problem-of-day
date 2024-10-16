#include <bits/stdc++.h> 
void sortOddEven(vector<int>& nums){
    int N = nums.size();
    vector<int> odds;
    vector<int> evens;
   
    for(int it : nums){
        if(it%2!=0){
            odds.push_back(it);
        }
        else{
            evens.push_back(it);
        }
    }
    sort(odds.begin(),odds.end(),greater<int>());
    sort(evens.begin(),evens.end());
    int i = 0;
  
    for(int odd : odds){
        nums[i++] = odd;
        

    }
    
    for(int even: evens){
        nums[i++] = even;
        
    }
    

 
    
    // Write your code here
}
