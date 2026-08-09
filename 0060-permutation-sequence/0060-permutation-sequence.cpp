class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1; i<=n; i++){
    s += to_string(i);
}
  sort(s.begin(),s.end());
  int i=1;
  do{
   if(k==i){
     return s;
   }
   i++;
  }while(next_permutation(s.begin(),s.end()));
   return s;
    }
};