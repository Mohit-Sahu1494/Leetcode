class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>change(2051);

        for(auto & person :logs){
            int birth=person[0];
            int death=person[1];
            change[birth]++;
            change[death]--;
        }
        int maxPopulation=0;
        int ans=1950;
        int population=0;
        for(int year=1950;year<=2050;year++){
            population+=change[year];
            if(population>maxPopulation){
                maxPopulation=population;
                ans=year;
            }
        }
        return ans;

    }
};