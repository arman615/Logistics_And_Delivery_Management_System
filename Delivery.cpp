#include "Delivery.h"

Delivery::Delivery(const std::string& item, const std::string& origin, const std::string& destination,
                   const std::string& estimatedTime)
    : item(item), origin(origin), destination(destination), estimatedTime(estimatedTime), status("Pending") {}

const std::string& Delivery::getItem() const {
    return item;
}

const std::string& Delivery::getOrigin() const {
    return origin;
}

const std::string& Delivery::getDestination() const {
    return destination;
}

const std::string& Delivery::getEstimatedTime() const {
    return estimatedTime;
}

const std::string& Delivery::getStatus() const {
    return status;
}

void Delivery::setStatus(const std::string& newStatus) {
    status = newStatus;
}

bool Delivery::isPending() const {
    return status == "Pending";
}
