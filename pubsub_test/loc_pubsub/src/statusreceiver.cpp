#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std;


class StatSubscriber : public rclcpp::Node{
    public:
        StatSubscriber() : Node("status_subscriber"){
            sub = this->create_subscription<std_msgs::msg::String>(
                "flight_status", rclcpp::QoS(10).best_effort(), [this](const std_msgs::msg::String &msg) {callback(msg);}
            );
        }

    private:
        void callback(const std_msgs::msg::String &msg) const{
            RCLCPP_INFO(this->get_logger(), "Drone stat: '%s'", msg.data.c_str());
        }

        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub;
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(make_shared<StatSubscriber>());
    rclcpp::shutdown();
    return 0;
}