class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;     
        for(auto email:emails){
            string str;
            auto it = email.begin();
            for (; '@' != *it && '+' != *it; ++it) {
                if ('.' != *it) {
                    str += *it;
                }
            }
            it=find(it, email.end(), '@');
            str.append(it, email.end());
            s.insert(str);
        }
        return s.size();
    }
};