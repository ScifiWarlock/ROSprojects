#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/point.hpp"

using namespace std;


class LocSubscriber : public rclcpp::Node{
    public:
        LocSubscriber() : Node("location_subscriber"){
            sub = this->create_subscription<geometry_msgs::msg::Point>(
                "location", rclcpp::QoS(10).best_effort(), [this](const geometry_msgs::msg::Point &msg) {callback(msg);}
            );
        }

    private:
        void callback(const geometry_msgs::msg::Point &msg) const{
            RCLCPP_INFO(this->get_logger(), "Drone is at: (%f, %f, %f)", msg.x, msg.y
        , msg.z);
        }

        rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr sub;
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<LocSubscriber>());
    rclcpp::shutdown();
    return 0;
}