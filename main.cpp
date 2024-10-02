// Selection sort algoritmas

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// funkcija, kuri nuskaito is klaviaturos skaicius tol kol neivedamas 0, grazina vektoriu

vector<int> skaitymas()
{
    vector<int> skaiciai;
    int skaicius;
    while (true)
    {
        cin >> skaicius;
        if (skaicius == 0)
        {
            break;
        }
        skaiciai.push_back(skaicius);
    }
    return skaiciai;
}

// funkcija, kuri isveda vektoriu i ekrana

void isvedimas(vector<int> skaiciai)
{
    for (int i = 0; i < skaiciai.size(); i++)
    {
        cout << skaiciai[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> skaiciai = skaitymas();
    isvedimas(skaiciai);

    for (int i = 0; i < skaiciai.size() - 1; i = i + 1)
    {
        int maz_index = i;
        for (int j = i + 1; j < skaiciai.size(); j = j + 1)
        {
            if (skaiciai[maz_index] > skaiciai[j])
            {
                maz_index = j;
            }
        }
        int laikinasis = skaiciai[maz_index];
        skaiciai[maz_index] = skaiciai[i];
        skaiciai[i] = laikinasis;
    }
    isvedimas(skaiciai);
    return 0;
}
