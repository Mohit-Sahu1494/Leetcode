class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
         int count=0;    
        for(int i=1;i<points.size();i++){
           int diffx=abs(points[i][0]-points[i-1][0]);
           int diffY=abs(points[i][1]-points[i-1][1]);
          count+=max(diffx,diffY);   
        }
          return count;
    }
};