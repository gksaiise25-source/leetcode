class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ans = true;
        int cnt_m[26]={0};
        int cnt_r[26]={0};
        int n1 = ransomNote.length();
        int n2 = magazine.length();
        for(int i=0;i<n1;i++){
            cnt_r[ransomNote[i]-'a']++;
        }
        for(int i=0;i<n2;i++){
            cnt_m[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(cnt_m[i]<cnt_r[i]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};