
 #ifndef _ORDERS_H
 #define _ORDERS_H
#include "robot_parts.h"
class Models {
    
    public:
    
        void create_models(vector<Parts>list, int size);
    
        void view_models (vector<Parts>list, int model[] );
    
        int model_quantity ();
    
        double total_cost(int quantity, double price);
    
    private:
        string head [6];
        string arm_1 [7];
        string arm_2 [7];
        string torso[7];
        string locomotor [8];
        string battery [7];
    
        double cost;
        int quantity;
        int battery_quantity;
    
};
 #endif
