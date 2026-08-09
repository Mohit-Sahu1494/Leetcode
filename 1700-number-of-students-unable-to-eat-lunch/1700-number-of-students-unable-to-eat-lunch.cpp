class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
     queue<int>q;
     int rotations=0;
     int size=students.size();
     int idx=0;
     for(int i=0;i<size;i++){
        q.push(students[i]);
     }
    while(!q.empty() && rotations < q.size()){
          if(q.front()==sandwiches[idx]){
            q.pop();
            idx++;
            rotations=0;
          }
          else{
            q.push(q.front());
            q.pop();
            rotations++;
          }
     }
     return q.size();
    }
};