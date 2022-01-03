class ParkingSystem {
private: 
    int big; 
    int medium;  
    int small;  
public:
    ParkingSystem(int big, int medium, int small)  
    :big(big), medium(medium),small(small){ 
    }
    
    bool addCar(int carType) {
        switch(carType) {
            case 1: {
                    if(this->big > 0) {
                        this->big--; 
                        return true;  
                    }else {
                        return false; 
                    }
                    break;  
                }
            case 2:  {
                    if(this->medium > 0) {
                        this->medium--;  
                        return true; 
                    }else{ 
                        return false; 
                    }
                    break;  
                }
            case 3:  {
                    if(this->small > 0) {
                        this->small--;    
                        return true; 
                    }else {
                        return false; 
                    }
                    break;  
            }
        }
        return false; 
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
