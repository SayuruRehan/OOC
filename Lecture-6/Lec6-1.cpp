#include <iostream>
#include <cstring>
using namespace std;

class Item
{
  private:
    int itemCode;
    char name[20];
    float price;

  public:
    void setItemDetails(int no, char pName[]);
    void setPrice(float pPrice);
    int getItemCode();
    float getPrice();
};

void Item::setItemDetails(int no, char *pName[])
{
  itemCode = no;
  strcpy(name, pName);
}

void Item::setPrice(float pPrice)
{
  price = pPrice;
}

int Item::getItemCode()
{
  return itemCode;
}

float Item::getPrice()
{
  return price;
}

int main() 
{
  Item it1;  //object
  
  it1.setItemDetails(1002, "Book");
  it1.setPrice(230.00);

  cout<<"The item code: "<<it1.getItemCode()<<endl;
  cout<<"The price Rs: "<<it1.getPrice()<<endl;
}