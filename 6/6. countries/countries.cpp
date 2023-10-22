#include <iostream>

using namespace std;


int main()
{

do
{
    int x;
    cout << "----------------------" << endl;
    cout << "|  *Counties menu*   |" << endl;
    cout << "| 1.   Poland        |" << endl;
    cout << "| 2.   Germany       |" << endl;
    cout << "| 3.   France        |" << endl;
    cout << "| 4.   Italy         |" << endl;
    cout << "| 5.   Spain         |" << endl;
    cout << "| 6. United Kingdom  |" << endl;
    cout << "| 7.    USA          |" << endl;
    cout << "| 8    Canada        |" << endl;
    cout << "| 9.   Russia        |" << endl;
    cout << "| 10.  China         |" << endl;

    cout << endl;
    cout << "Paste the number-> ";
    cin >> x;
    getchar();

    cout << endl;

    switch(x)
    {
        case 1:
        {
            cout << "Poland - Poland is a country located in Central Europe. " << endl;
            cout << "It is known for its rich history, vibrant culture, and beautiful landscapes." << endl;
            break;
        }
        case 2:
        {
            cout << "Germany - Germany is a country in Western Europe." << endl;
            cout << "It is known for its strong economy, rich cultural heritage, and historical landmarks such as the Berlin Wall." << endl;
            break;
        }
        case 3:
        {
            cout << "France - France is a country located in Western Europe." << endl;
            cout << "It is famous for its art, fashion, cuisine, and iconic landmarks such as the Eiffel Tower and the Louvre Museum." << endl;
            break;
        }
        case 4:
        {
            cout << "Italy - Italy is a country in Southern Europe. It is known for its historical cities like Rome, Venice, and Florence. " << endl;
            cout << "as well as its delicious cuisine and rich artistic heritage." << endl;
            break;
        }
        case 5:
        {
            cout << "Spain - Spain is a country located in southwestern Europe. " << endl;
            cout << "It is known for its vibrant culture, beautiful beaches, " << endl;
            cout << "and historical sites like the Sagrada Familia in Barcelona and the Alhambra in Granada." << endl;
            break;
        }
        case 6:
        {
            cout << "United Kingdom - The United Kingdom is a country consisting of England," << endl;
            cout << "Scotland, Wales, and Northern Ireland. It is known for its diverse culture, historic landmarks" << endl;
            cout << "like Buckingham Palace,/n and iconic symbols like the Big Ben." << endl;
            break;
        }
        case 7:
        {
            cout << "United States - The United States is a country in North America. It is known for its cultural diversity, economic power," << endl;
            cout <<"and famous landmarks such as the Statue of Liberty and the Grand Canyon." << endl;
            break;
        }
        case 8:
        {
            cout << "Canada - Canada is a country located in North America." << endl;
            cout << "It is known for its vast wilderness, stunning natural landscapes, and friendly people." << endl;
            cout << "Canada is also famous for its maple syrup and ice hockey." << endl;
            break;
        }
        case 9:
        {
            cout << "Russia - Russia is the largest country in the world, spanning across Eastern Europe and northern Asia." << endl;
            cout << "It is known for its rich history, diverse landscapes, and iconic landmarks like" << endl;
            cout << "the Kremlin in Moscow and the Hermitage Museum in Saint Petersburg. " << endl;
            break;
        }
        case 10:
        {
            cout << "China - China is a country located in East Asia. " << endl;
            cout << "It is known for its ancient civilization, diverse culture, and world-famous landmarks such as the Great Wall of China and" << endl;
            cout << "the Terracotta Army. " << endl;
            break;
        }
        default: cout << endl << "Wrong number! Try again" << endl;
    }
    
    cout << endl;
    cout << "Press any key to countinue...";
    getchar();
} while(true);
    return 0;
}