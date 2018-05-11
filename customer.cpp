#include <iostream>
using namespace std;

class PersonData
{
private:
   string lastName;
   string firstName;
   string address;
   string city;
   string state;
   int zip;
   string phone;
public:
   void setLastName(string n)
   {
      lastName = n;
   }
   void setFirstName(string n)
   {
      firstName = n;
   }
   void setAddress(string n)
   {
      address = n;
   }
   void setCity(string n)
   {
      city = n;
   }
   void setState(string n)
   {
      state = n;
   }
   void setZip(int n)
   {
      zip = n;
   }
   void setPhone(string n)
   {
      phone = n;
   }
   string getLastName()
   {
      return lastName;
   }
   string getFirstName()
   {
      return firstName;
   }
   string getAddress()
   {
      return address;
   }
   string getCity()
   {
      return city;
   }
   string getState()
   {
      return state;
   }
   int getZip()
   {
      return zip;
   }
   string getPhone()
   {
      return phone;
   }
};

class CustomerData : public PersonData
{
private:
   int customerNumber;
   bool mailingList;
public:
   void setCustomerNumber(int n)
   {
      customerNumber = n;
   }
   void setMailingList(bool n)
   {
      mailingList = n;
   }
   int getCustomerNumber()
   {
      return customerNumber;
   }
   bool getMailingList()
   {
      return mailingList;
   }
};

class PreferredCustomer : public CustomerData
{
private:
   double purchasesAmount;
   double discountLevel;
public:
   void setPurchaseAmount(int n)
   {
      purchasesAmount = n;
   }
   void setDiscountLevel()
   {
      if(purchasesAmount >= 500 || purchasesAmount < 1000)
      {
         discountLevel = 5.0;
      }
      else if(purchasesAmount >= 1000 || purchasesAmount < 1500)
      {
         discountLevel = 6.0;
      }
      else if(purchasesAmount >= 1500 || purchasesAmount < 2000)
      {
         discountLevel = 7.0;
      }
      else if(purchasesAmount >= 2000)
      {
         discountLevel = 10.0;
      }
   }
   double getPurchaseAmount()
   {
      return purchasesAmount;
   }
   double getDiscountLevel()
   {
      return discountLevel;
   }
};

int main()
{
   string lastName, firstName, address, city, state, phone;
   int zip, customerNumber;
   double purchasesAmount, discountLevel;

   PreferredCustomer d;

   cout << "Enter Last Name: ";
   cin >> lastName;
   cout << "Enter First Name: ";
   cin >> firstName;
   cout << "Enter Address: ";
   cin >> address;
   cout << "Enter City: ";
   cin >> city;
   cout << "Enter State: ";
   cin >> state;
   cout << "Enter Zip: ";
   cin >> zip;
   cout << "Enter Phone: ";
   cin >> phone;



   return 0;
}
