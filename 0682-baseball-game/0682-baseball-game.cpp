class Solution {
public:
    int calPoints(vector<string>& operations) {
        int total=0;
         stack<int>st;
        for(int i=0;i<operations.size();i++){
            
             if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                int data=st.top();
                st.push(2*data);
            }
            else if(operations[i]=="+"){
                int data=st.top();
                st.pop();
                int sum=st.top()+data;
                st.push(data);
                st.push(sum);
            }
        else{
            st.push(stoi(operations[i]));
        }
        } 
        while(!st.empty()){
            total+=st.top();
            st.pop();
        }
        return total;
    }
};