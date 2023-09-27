#ifndef DELIVERY_H
#define DELIVERY_H

#include <string>

class Delivery {
private:
    std::string item;
    std::string origin;
    std::string destination;
    std::string estimatedTime;
    std::string status;

public:
    Delivery(const std::string& item, const std::string& origin, const std::string& destination,
             const std::string& estimatedTime);

    const std::string& getItem() const;
    const std::string& getOrigin() const;
    const std::string& getDestination() const;
    const std::string& getEstimatedTime() const;
    const std::string& getStatus() const;

    void setStatus(const std::string& newStatus);
    bool isPending() const;
};

#endif // DELIVERY_H
