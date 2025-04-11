string minWindow(string s, string t) {
    int need[128] = {0}; 
    int count = 0;

    for (char c : t) {
        if (need[c] == 0) count++; 
        need[c]++;
    }

    int have = 0;
    int freq[128] = {0}; 
    int left = 0, right = 0;
    int bestLeft = 0, bestRight = s.size() + 1;

    while (right < s.size()) {
        char r = s[right];
        freq[r]++;
        if (freq[r] == need[r]) have++;

        while (have == count) {
            if ((right - left + 1) < (bestRight - bestLeft)) {
                bestLeft = left;
                bestRight = right + 1;
            }

            char l = s[left];
            freq[l]--;
            if (freq[l] < need[l]) have--;
            left++;
        }

        right++;
    }

    if (bestRight > s.size()) return "";
    return s.substr(bestLeft, bestRight - bestLeft);
}