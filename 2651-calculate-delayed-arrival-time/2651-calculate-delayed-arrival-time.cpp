class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        
        if(arrivalTime + delayedTime < 24) return arrivalTime + delayedTime;
        
        else if(arrivalTime + delayedTime == 24) return 0;
        
        else return (arrivalTime + delayedTime) % 24;
        
    }
};