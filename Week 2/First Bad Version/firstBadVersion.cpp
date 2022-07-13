// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//Runtime: 1889 ms, faster than 6.55% of C++ online submissions for First Bad Version.
//Memory Usage: 6 MB, less than 22.06% of C++ online submissions for First Bad Version.
//--TO BE OPTIMIZED--

using namespace std;
class Solution {
public:
    bool isBadVersion(int i){
        //it would go here, if we were to implement it.
        ;
    }

    int firstBadVersion(int n) {
        int bad = n;
        for (int i = n; i >= 1; i--){
            if(isBadVersion(i)) {
                bad = i;
            } else {return bad;}
        }
        return 1;
    }
};