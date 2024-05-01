#include <iostream>
#include <string>
using namespace std;

class Product 
{
private:
    int prod_id;
    string prod_name;
    int stock;
    double gst;
    double discount;
    double product_price;

public:
   
    Product(int id, string name, int stock, double gst, double discount, double price) 
        : prod_id(id), prod_name(name), stock(stock), gst(gst), discount(discount), product_price(price) {}

  
    void setProdId(int id) { prod_id = id; }
    int getProdId() const { return prod_id; }

    void setProdName(const string& name) { prod_name = name; }
    string getProdName() const { return prod_name; }

    void setStock(int s) { stock = s; }
    int getStock() const { return stock; }

    void setGst(double g) { gst = g; }
    double getGst() const { return gst; }

    void setDiscount(double d) { discount = d; }
    double getDiscount() const { return discount; }

    void setProductPrice(double price) { product_price = price; }
    double getProductPrice() const { return product_price; }

    bool checkStock(int quantity) const { return stock >= quantity; }
};

class Purchased_Product 
{
private:
    int quantity;

public:
  
    Purchased_Product(int qty) : quantity(qty) {}

   
    void setQuantity(int qty) { quantity = qty; }
    int getQuantity() const { return quantity; }


    double calculateGst(double price, double gst) const 
	{
        return (price * gst * quantity) / 100.0;
    }


    double calculateDiscount(double price, double discount) const 
	{
        return (price * discount * quantity) / 100.0;
    }

  
    double calculatePrice(double price, double gst, double discount) const 
	{
        double total_price = price * quantity;
        total_price += calculateGst(price, gst);
        total_price -= calculateDiscount(price, discount);
        return total_price;
    }
};

class Node 
{
public:
    Purchased_Product* data;
    Node* next;


    Node(Purchased_Product* data) : data(data), next(nullptr) {}
};

class LinkedList 
{
private:
    Node* head;

public:
   
    LinkedList() : head(nullptr) {}

    
    ~LinkedList() 
	{
        Node* current = head;
        while (current != nullptr) 
		{
            Node* next = current->next;
            delete current->data;
            delete current;
            current = next;
        }
        head = nullptr;
    }

 
    void addNode(Purchased_Product* data) 
	{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    
    void deleteNode() 
	{
        if (head != nullptr) 
		{
            Node* temp = head;
            head = head->next;
            delete temp->data;
            delete temp;
        }
    }


    void traverse() const 
	{
        Node* current = head;
        while (current != nullptr) 
		{
            cout << "Quantity: " << current->data->getQuantity() << endl;
            current = current->next;
        }
    }
};

class Cart : protected LinkedList 
{
public:
   
    void addProduct(Purchased_Product* product) 
	{
        addNode(product);
    }

  
    void removeProduct() 
	{
        deleteNode();
    }


    void viewCart() const 
	{
        cout << "Cart contents:" << endl;
        traverse();
    }

   
    void generateBill() const 
	{
        Node* current = head;
        double total_price = 0.0;
        while (current != nullptr) 
		{
            total_price += current->data->calculatePrice(10.0, 5.0, 2.0);
            current = current->next;
        }
        cout << "Total bill amount: " << total_price << endl;
    }

   
    void displayBill() const 
	{
        cout << "Generating bill..." << endl;
        generateBill();
    }
};

int main() 
{
    Product product1(1, "Product 1", 10, 10.0, 5.0, 100.0);
    Product product2(2, "Product 2", 20, 12.0, 3.0, 150.0);

    Purchased_Product purchase1(2);
    Purchased_Product purchase2(3);

    Cart cart;
    cart.addProduct(&purchase1);
    cart.addProduct(&purchase2);

    cart.viewCart();
    cart.displayBill();

    return 0;
}
