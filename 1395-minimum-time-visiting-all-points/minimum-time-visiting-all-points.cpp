class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        unsigned int seconds = 0;
        for (int i = 1; i < points.size(); ++i) {
            seconds += max(abs(points[i][1] - points[i - 1][1]), abs(points[i][0] - points[i - 1][0]));
        }
        return seconds;
    }
};