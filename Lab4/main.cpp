#include <iostream>
using namespace std;

struct Package{
    string packageID;
    string destinationCity;
    int dimensions[3];
    Package* next;
};

struct Courier{
    string courierName;
    string vehicleType;
};

Courier c[5];
int frontc = -1;
int rearc = -1;

void push(Package** top)
{
    Package* temp = new Package();

    cout << "Package ID: ";
    cin >> temp->packageID;

    cout << "Destination City: ";
    cin >> temp->destinationCity;

    for (int i = 0; i < 3; i++)
    {
        cout << "Dimension " << i + 1 << ": ";
        cin >> temp->dimensions[i];
    }

    temp->next = *top;
    *top = temp;
}

void enqueue()
{
    if(frontc == -1)
    {
        frontc == rearc == 0;
    }

    else if((rearc + 1) % 5 == frontc)
    {
        cout << "Queue is full.\n";
        return;
    }

    rearc = (rear + 1) % 5;

    cout << "Kurye Adi: ";
    cin >> c[rearc].courierName;

    cout << "Arac Tipi: ";
    cin >> c[rearc].vehicleType;

    cout << "Successfully added.\n";
}

void dequeue() {
    if (frontc == -1) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Corier deleted: " << c[frontc].courierName << endl;

    if (frontc == rearc) {
        frontc = -1;
        rearc = -1;
    } else {
        frontc = (frontc + 1) % 5;
    }
}

void display(Package* top) {
    cout << "= Packages =" << endl;
    if (top == NULL) {
        cout << "Stack is empty." << endl;
    } else {
        Package* temp = top;
        while (temp != NULL) {
            cout << "Paket ID: " << temp->packageID << " | Sehir: " << temp->destinationCity << endl;
            temp = temp->next;
        }
    }
    cout << "\n= Coruiers =" << endl;
    if (frontc == -1) {
        cout << "Staack is empty." << endl;
    } else {
        int i = frontc;
        while (true) {
            cout << "Corier: " << c[i].courierName << " [" << c[i].vehicleType << "]" << endl;

            if (i == rearc) break;
            i = (i + 1) % 5;
        }
    }
}

int main()
{

    Package q;
    Package* top = nullptr

    return 0;
}
