class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int nse[n];
        int pse[n];
        nse[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            if(heights[st.top()]<heights[i]){
                nse[i]=st.top();
            }else{
                while(st.size()>0 && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                if(st.size()==0)nse[i]=n;
                else if(heights[st.top()]<heights[i])nse[i]=st.top();
            }
            st.push(i);
        }
        while(st.size()>0){
            st.pop();
        }
        pse[0]=-1;
        st.push(0);
        for(int i=1;i<n;i++){
             if(heights[st.top()]<heights[i]){
                pse[i]=st.top();
            }else{
                while(st.size()>0 && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                if(st.size()==0)pse[i]=-1;
                else if(heights[st.top()]<heights[i]) pse[i]=st.top();
            }
            st.push(i);
        }
        int maxArea=INT_MIN;
        for(int i=0;i<n;i++){
            
            maxArea=max(maxArea,heights[i]*((nse[i]-i)+(i-pse[i]-1)));
        }
        return maxArea;

        
    }
};