class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
    //    unordered_set<int> s1;
    //    unordered_set<int> s2;
    //    for(int i = 0; i < nums1.size(); i++){
    //     s1.insert(nums1[i]);
    //    } 
    //    for(int i = 0; i < nums2.size(); i++){
    //     s2.insert(nums2[i]);
    //    }
    //    for(auto a : s1){
    //     if(s2.find(a)!=s2.end()){
    //         ans.push_back(a);
    //     }
    //    }
    unordered_set<int> mySet;
    for(int i = 0; i < nums1.size(); i++){
        mySet.insert(nums1[i]);
    }
    for(int i = 0; i <nums2.size(); i++){
        if(mySet.count(nums2[i])){
            ans.push_back(nums2[i]);
            mySet.erase(nums2[i]); //avoiding duplicates
        }
    }
           return ans;
      
    }
};