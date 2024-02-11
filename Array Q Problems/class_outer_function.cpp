#include <bits/stdc++.h>
#include <fstream>

// Class to represent a product
class Product {
public:
    Product(const std::string& name, double price, int stock)
        : name(name), price(price), stock(stock) {}

    // Function to generate XML representation of a product
    std::string toXml() const {
        return "<Product>\n"
               "    <Name>" + name + "</Name>\n"
               "    <Price>" + std::to_string(price) + "</Price>\n"
               "    <Stock>" + std::to_string(stock) + "</Stock>\n"
               "</Product>\n";
    }

private:
    std::string name;
    double price;
    int stock;
};

// Class to represent a catalog of products
class Catalog {
public:
    // Function to add a product to the catalog
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    // Function to generate XML representation of the catalog
    std::string toXml() const {
        std::string xml = "<Catalog>\n";

        for (const auto& product : products) {
            xml += product.toXml();
        }

        xml += "</Catalog>\n";
        return xml;
    }

private:
    std::vector<Product> products;
};

int main() {
    // Create a catalog and add some products
    Catalog catalog;
    catalog.addProduct(Product("Laptop", 999.99, 10));
    catalog.addProduct(Product("Smartphone", 499.99, 20));
    catalog.addProduct(Product("Headphones", 59.99, 30));

    // Generate XML representation of the catalog
    std::string xmlContent = catalog.toXml();

    // Save the XML content to a file
    std::ofstream outputFile("catalog.xml");
    if (outputFile.is_open()) {
        outputFile << xmlContent;
        outputFile.close();
        std::cout << "Catalog saved to catalog.xml" << std::endl;
    } else {
        std::cerr << "Unable to open file for writing" << std::endl;
    }

    return 0;
}
