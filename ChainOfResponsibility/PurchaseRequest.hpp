#ifndef _PURCHASEREQUEST_HPP_
#define _PURCHASEREQUEST_HPP_

class PurchaseRequest{
public:
    int getType() const {
        return type;
    }

    float getPrice() const {
        return price;
    }

    int getId() const {
        return id;
    }

    PurchaseRequest(const int type, const float price, const int id): type(type), price(price), id(id) {};

private:
    int type;
    float price = 0.0f;
    int id = 0;
};


#endif 