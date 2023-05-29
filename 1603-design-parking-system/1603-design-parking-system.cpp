class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        carSlots[0] = big;
        carSlots[1] = medium;
        carSlots[2] = small;
    }

    bool addCar(int carType) {
        carSlots[carType - 1]--;
        return carSlots[carType - 1] >= 0;
    }

private:
    int carSlots[3] = { 0 };
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */