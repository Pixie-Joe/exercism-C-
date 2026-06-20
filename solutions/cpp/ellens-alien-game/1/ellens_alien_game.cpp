class Alien {
    public: 
        int x_coordinate;
        int y_coordinate;
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        int get_health() {
            return health;
        }

        bool hit() {
            if(health > 0) {
                health = health - 1;
            }
            return true;
        }

        bool is_alive() {
            if(health != 0) {
                return true;
            } else {
                return false;
            }
        }

        bool teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }

        bool collision_detection(const Alien& other) {
            if((x_coordinate == other.x_coordinate) && (y_coordinate == other.y_coordinate)) {
                return true;
            } else {
                return false;
            }
        }

    private:
    int health = 3;    
};

namespace targets {
// TODO: Insert the code for the alien class here

}  // namespace targets
