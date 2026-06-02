class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int minFinishTime = INT_MAX;
        for (int i = 0; i < landStartTime.size(); i++) {
            for (int j = 0; j < waterStartTime.size(); j++) {
                int tempTime = 0;
                if (landStartTime[i] > waterStartTime[j]) {
                    tempTime = waterStartTime[j] + waterDuration[j];
                    if (tempTime >= landStartTime[i]) {
                        tempTime += landDuration[i];
                    } else {
                        tempTime +=
                            (landStartTime[i] - tempTime) + landDuration[i];
                    }
                } else {
                    tempTime = landStartTime[i] + landDuration[i];
                    if (tempTime >= waterStartTime[j]) {
                        tempTime += waterDuration[j];
                    } else {
                        tempTime +=
                            (waterStartTime[j] - tempTime) + waterDuration[j];
                    }
                }

                minFinishTime = min(minFinishTime, tempTime);
            }
        }

        return minFinishTime;
    }
};