class Solution {
public:
    vector<int> constructRectangle(int area) {
        //  int l;
        //  int w;
        //  int minimum=INT_MAX;
        // for(int width=1;width<=area;width++){
        //     if(area%width!=0) continue;
        //    int length=area/width;
        //   if(length>=width){
        //      int deff=length-width;
        //      if(deff<minimum){
        //         minimum=deff;
        //         l=length;
        //         w=width;
        //      }
        //   }
        // }
        // return {l,w};

            int width=sqrt(area);
            while(area%width!=0){
                width--;
            }
      return {area/width,width};
    }
};