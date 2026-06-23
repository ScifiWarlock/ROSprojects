#include <iostream>
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/point.hpp"

using namespace std::chrono_literals;
using namespace std;

class LocationPublisher : public rclcpp::Node{
    public:
        LocationPublisher() : Node("loc_publisher"){
            pub_coord = create_publisher<geometry_msgs::msg::Point>("location", rclcpp::QoS(10).best_effort());
            pub_string = create_publisher<std_msgs::msg::String>("flight_status",rclcpp::QoS(10).best_effort());
            timer = create_wall_timer(500ms, [this]() {callback();});

        }
    private:
        void callback(){
            auto message_coord = geometry_msgs::msg::Point();
            message_coord.x = 100.0;
            message_coord.y = 100.0;
            message_coord.z = 100.0;

            auto message_flight = std_msgs::msg::String();
            message_flight.data = "Drone is flying mission";
            RCLCPP_INFO(this->get_logger(), "Publishing loc");
            pub_coord->publish(message_coord);
            RCLCPP_INFO(this->get_logger(), "Publishing status");
            pub_string->publish(message_flight);
        }
        rclcpp::TimerBase::SharedPtr timer;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_string;
        rclcpp::Publisher<geometry_msgs::msg::Point>::SharedPtr pub_coord;
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<LocationPublisher>());
    rclcpp::shutdown();
    return 0;
}