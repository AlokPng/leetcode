class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> smap, tmap;

    for (int i=0; i < s.size(); i++) {
        if (smap.find(s[i]) == smap.end()) {
            smap[s[i]] = i;
        }
        
        if (tmap.find(t[i]) == tmap.end()) {
            tmap[t[i]] = i;
        }
        
        if (smap[s[i]] != tmap[t[i]])
            return false;
    }
    
    return true;

        
    }
};