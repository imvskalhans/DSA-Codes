//Design again by yourself
class UndergroundSystem {
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkIns[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto& checkInInfo = checkIns[id];
        string startStation = checkInInfo.first;
        int checkInTime = checkInInfo.second;
        string trip = startStation + "->" + stationName;
        
        // Calculate the travel time
        int travelTime = t - checkInTime;
        
        // Update the total travel time and count for this trip
        travelTimes[trip].first += travelTime;
        travelTimes[trip].second++;
        
        // Remove the check-in record
        checkIns.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string trip = startStation + "->" + endStation;
        
        // Check if there are any recorded travel times for this trip
        if (travelTimes.count(trip)) {
            int totalTravelTime = travelTimes[trip].first;
            int totalCount = travelTimes[trip].second;
            
            // Calculate the average travel time
            return static_cast<double>(totalTravelTime) / totalCount;
        }
        
        return 0.0; // If no recorded travel times, return 0 as the average time
    }
    
private:
    unordered_map<int, pair<string, int>> checkIns; // Track check-ins using id as the key
    unordered_map<string, pair<int, int>> travelTimes; // Track travel times using trip as the key
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */