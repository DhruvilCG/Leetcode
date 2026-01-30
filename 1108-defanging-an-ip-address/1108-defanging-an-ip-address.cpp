class Solution {
public:
    string defangIPaddr(string address) {

        // Space = O(n)    Time = O(n)

        // string ans = "" ;
        // for (int i = 0 ; i < address.size() ; i++) {
        //     if (address[i] == '.') {
        //         ans += "[.]";
        //     } else {
        //         ans += address[i];
        //     }
        // }

        // return ans;






        // Space = O(1)    Time = O(n)

        int dots = 0 ;
        int oldSize = address.size();
        for (int i : address) {
            if (i == '.') {
                dots++;
            } 
        }

        address.resize(oldSize + dots*2);

        int i = oldSize-1;
        int j = address.size()-1;

        while (i >= 0) {
            if (address[i] == '.') {
                address[j--] = ']';
                address[j--] = '.';
                address[j--] = '[';
            } else {
                address[j--] = address[i];
            } 

            i--;
        }

        return address;
    }
};