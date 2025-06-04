class Solution {
public:
    string convertToTitle(int columnNumber) {
        string letters;
        int num = columnNumber;
        while (num > 0) {
            num--;
            letters = letters + (char)((num) % 26 + 'A');
            num = num / 26;
        }
        reverse (letters.begin(), letters.end());
        return letters;
    }
};