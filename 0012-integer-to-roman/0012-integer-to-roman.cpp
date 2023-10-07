class Solution {
public:
    string intToRoman(int num) {
        
        string ans = "";
        
        if(num >= 1000) {
            int rs1000 = num / 1000;
            ans += string(rs1000, 'M');
            num %= 1000;
        }

        if(num >= 900) {
            ans += "CM";
            num %= 900;
        }

        if(num >= 500) {
            int rs500 = num / 500;
            ans += string(rs500, 'D');
            num %= 500;
        }

        if(num >= 400) {
            ans += "CD";
            num %= 400;
        }

        if(num >= 100) {
            int rs100 = num / 100;
            ans += string(rs100, 'C');
            num %= 100;
        }

        if(num >= 90) {
            ans += "XC";
            num %= 90;
        }

        if(num >= 50) {
            int rs50 = num / 50;
            ans += string(rs50, 'L');
            num %= 50;
        }

        if(num >= 40) {
            ans += "XL";
            num %= 40;
        }

        if(num >= 10) {
            int rs10 = num / 10;
            ans += string(rs10, 'X');
            num %= 10;
        }

        if(num >= 9) {
            ans += "IX";
            num %= 9;
        }

        if(num >= 5) {
            int rs5 = num / 5;
            ans += string(rs5, 'V');
            num %= 5;
        }

        if(num >= 4) {
            ans += "IV";
            num %= 4;
        }

        if(num >= 1) {
            int rs1 = num / 1;
            ans += string(rs1, 'I');
            num %= 1;
        }

        return ans;
    }
};