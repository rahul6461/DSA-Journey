class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.length();
        if (rows == 0) return "";

        int cols = n / rows;
        string result = "";

        // Traverse diagonals directly
        for (int start = 0; start < cols; start++) {
            int i = 0, j = start;

            while (i < rows && j < cols) {
                result += encodedText[i * cols + j];
                i++;
                j++;
            }
        }

        // Remove trailing spaces
        while (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};