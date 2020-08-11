 #include <iostream>

using namespace std;

 void dist(int distances[6][6]) {

    int minimalCurrentPathDistance = 1000000;
    int shortesPath[6] = { -1, -1, -1, -1,-1,-1};

    int firstCity = 0;

    for (int secondCity = 1; secondCity <= 5; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity <= 5; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity <= 5; fourthCity = fourthCity + 1) {
                     for (int fifthCity = 1; fifthCity <= 5; fifthCity = fifthCity + 1) {
                          for (int sixCity = 1; sixCity <= 5; sixCity = sixCity + 1) {


                int orderOfCitiesInPath[6] = { firstCity, secondCity, thirdCity, fourthCity, fifthCity, sixCity };

                bool citiesInPathAreAllDifferent = true;

                for (int firstIndex = 0; firstIndex <= 5; firstIndex = firstIndex + 1) {
                    for (int secondIndex = 0; secondIndex <= 5; secondIndex = secondIndex + 1) {
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
                    currentPathDistance += distances[fifthCity][sixCity];
                    currentPathDistance += distances[sixCity][firstCity];

                    if (minimalCurrentPathDistance > currentPathDistance) {
                        minimalCurrentPathDistance = currentPathDistance;
                        for (int i = 0; i < 6; i++)
                            shortesPath[i] = orderOfCitiesInPath[i];
                    }
                }
            }
        }
    }

    cout << minimalCurrentPathDistance << endl;
    for (int i = 0; i < 6; i++)
        cout << shortesPath[i] << ' ';
    cout << firstCity << endl;
}
    }
 }


int main() {

    int g[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> g[i][j];
        }
    }
    dist(g);
    system("pause");
    return 0;
}


