class MyCalendar {
    private:
      vector<pair<int,int>>arr;
public:
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for( auto x:arr){
            int start=x.first;
            int end=x.second;

            if(startTime<end && start<endTime){
                return false;
            }
        }
         arr.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */