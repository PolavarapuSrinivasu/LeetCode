class Solution {
    public int removeCoveredIntervals(int[][] intervals) {
        int count = 0;
        for(int i = 0; i < intervals.length; i++) {
            if(intervals[i][0] != -1 && intervals[i][1] != -1) {
                for(int j = 0; j < intervals.length; j++) {
                    if(i!=j && intervals[i][0] <= intervals[j][0] && intervals[i][1] >= intervals[j][1]) {
                        intervals[j][0] = -1;
                        intervals[j][1] = -1;
                        count++;
                    }
                }
            }
        }
        return intervals.length - count;
    }
}