#include <iostream>
#include <queue>

using namespace std;

struct shop
{
    int client_nr;
    int products;
};

int main()
{
    queue<shop> clients;

    int clt_nr = 1, prod;

    cout << "Enter amount of products or -1 to stop adding clients: ";
    while (cin >> prod && prod != -1)
    {
        clients.push({clt_nr, prod});
        clt_nr++;
    }

    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Enter 'N' when first client is done" << endl;
    cout << "Enter 'W' to see how many clients are in the queue" << endl;
    cout << "Enter 'Q' to stop the program" << endl;
    cout << "---------------------------------------------" << endl;

    char choice;
    bool should_continue = true;

    while (should_continue)
    {
        cout << "-> ";
        cin >> choice;

        switch (choice)
        {
        case 'N':
            if (!clients.empty())
            {
                shop next_client = clients.front();
                clients.pop();
                cout << "Done with client number: " << next_client.client_nr << endl;
            }
            else
            {
                cout << "No clients in the queue." << endl;
            }
            break;
        case 'W':
            cout << "There are " << clients.size() << " clients in the queue." << endl;
            break;
        case 'Q':
            should_continue = false;
            break;
        default:
            cout << "Invalid choice. Please enter 'N', 'W', or 'Q'." << endl;
            break;
        }
    }

    cout << "---------------------------------------------" << endl;
    cout << "Program has been stopped." << endl;

    if (!clients.empty())
    {
        cout << "Other clients in the queue: " << endl;
        while (!clients.empty())
        {
            shop next_client = clients.front();
            cout << "Client number: " << next_client.client_nr << ", Amount of products: " << next_client.products << endl;
            clients.pop();
        }
    }

    return 0;
}