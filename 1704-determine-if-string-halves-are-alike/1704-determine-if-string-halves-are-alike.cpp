class Solution {
public:
    int solve(string s, int start, int end) {
    int count = 0;
    while (start <= end) {
        if (s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' ||
            s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U') {
            count++;
        }
        start++;
    }
    return count;
}

bool halvesAreAlike(string s) {
    int start = 0, end = s.length() - 1;
    int mid = start + (end - start) / 2; // Corrected calculation of mid
    int count1 = solve(s, start, mid);
    int count2 = solve(s, mid + 1, end);
    return (count1 == count2);
}
};