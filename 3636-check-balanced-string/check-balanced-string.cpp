class Solution {
public:
    bool isBalanced(string num) {
        int os=0,es=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0)es+=(num[i]-'0');
            else os+=(num[i]-'0');
        }
        // return os==es?"True":"False";
        if(os==es)return true;
        return false;
    }
};
