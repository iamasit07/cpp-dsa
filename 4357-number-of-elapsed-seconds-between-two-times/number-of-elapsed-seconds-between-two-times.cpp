class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hours = stoi(endTime.substr(0, 2)) - stoi(startTime.substr(0, 2));
        int minutes = stoi(endTime.substr(3, 2)) - stoi(startTime.substr(3, 2));
        int second = stoi(endTime.substr(6, 2)) - stoi(startTime.substr(6, 2));

        second += (minutes * 60) + (hours * 60 * 60);
        return second;
    }
};