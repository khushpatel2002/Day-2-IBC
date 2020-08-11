#include <iostream>

using namespace std;


void tsp_5(int distances[5][5]) {
int shortesPath[5] = { -1, -1, -1, -1, -1 };

    int minimalCurrentPathDistance = 1000000;

    int firstCity = 0;
    for (int secondCity = 1; secondCity <= 4; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity <= 4; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity <= 4; fourthCity = fourthCity + 1) {
            for (int fifthCity = 1; fifthCity <= 4; fifthCity = fifthCity + 1) {


                int orderOfCitiesInPath[5] = { firstCity, secondCity, thirdCity, fourthCity, fifthCity };

                bool citiesInPathAreAllDifferent = true;

                for (int firstIndex = 0; firstIndex <= 4; firstIndex = firstIndex + 1) {
                    for (int secondIndex = 0; secondIndex <= 4; secondIndex = secondIndex + 1) {
                        if (firstIndex != secondIndex) {
                            int firstCityToCheck = orderOfCitiesInPath[firstIndex];
                            int secondCityToCheck = orderOfCitiesInPath[secondIndex];
                            if (firstCityToCheck == secondCityToCheck) {
                                citiesInPathAreAllDifferent = false;
                            }
                        }
                    }
                }

                if (citiesInPathAreAllDifferent == false) {
                    continue;
                }
                else {
                    int currentPathDistance = 0;
                    currentPathDistance += distances[firstCity][secondCity];
                    currentPathDistance += distances[secondCity][thirdCity];
                    currentPathDistance += distances[thirdCity][fourthCity];
                    currentPathDistance += distances[fourthCity][fifthCity];
                    currentPathDistance += distances[fifthCity][firstCity];

                    if (minimalCurrentPathDistance > currentPathDistance) {
                        minimalCurrentPathDistance = currentPathDistance;
                        for (int i = 0; i < 5; i++)
                            shortesPath[i] = orderOfCitiesInPath[i];
                    }
                }
            }
        }
    }
}
    cout << minimalCurrentPathDistance << endl;
    for (int i = 0; i < 5; i++)
        cout << shortesPath[i] << ' ';
    cout << firstCity << endl;
}


int main() {

    int g[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> g[i][j];
        }
    }
    tsp_5(g);
    system("pause");
    return 0;
}
