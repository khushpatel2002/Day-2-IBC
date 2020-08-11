#include <iostream>

using namespace std;


void tsp_4(int distances[4][4]) {

    int minimalCurrentPathDistance = 1000000;
    int shortesPath[4] = { -1, -1, -1, -1 };

    int firstCity = 0;

    for (int secondCity = 1; secondCity <= 3; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity <= 3; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity <= 3; fourthCity = fourthCity + 1) {


                int orderOfCitiesInPath[4] = { firstCity, secondCity, thirdCity, fourthCity };

                bool citiesInPathAreAllDifferent = true;

                for (int firstIndex = 0; firstIndex <= 3; firstIndex = firstIndex + 1) {
                    for (int secondIndex = 0; secondIndex <= 3; secondIndex = secondIndex + 1) {
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
                    currentPathDistance += distances[fourthCity][firstCity];

                    if (minimalCurrentPathDistance > currentPathDistance) {
                        minimalCurrentPathDistance = currentPathDistance;
                        for (int i = 0; i < 4; i++)
                            shortesPath[i] = orderOfCitiesInPath[i];
                    }
                }
            }
        }
    }
    cout << minimalCurrentPathDistance << endl;
    for (int i = 0; i < 4; i++)
        cout << shortesPath[i] << ' ';
    cout << firstCity << endl;
}


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

void tsp_6(int distances[6][6]) {
int shortesPath[6] = { -1, -1, -1, -1, -1, -1 };

    int minimalCurrentPathDistance = 1000000;

    int firstCity = 0;
    for (int secondCity = 1; secondCity <= 5; secondCity = secondCity + 1) {
        for (int thirdCity = 1; thirdCity <= 5; thirdCity = thirdCity + 1) {
            for (int fourthCity = 1; fourthCity <= 5; fourthCity = fourthCity + 1) {
            for (int fifthCity = 1; fifthCity <= 5; fifthCity = fifthCity + 1) {
            	for (int sixthCity = 1; sixthCity <= 5; sixthCity = sixthCity + 1) {


                int orderOfCitiesInPath[6] = { firstCity, secondCity, thirdCity, fourthCity, fifthCity, sixthCity };

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
                    currentPathDistance += distances[fifthCity][sixthCity];
                    currentPathDistance += distances[sixthCity][firstCity];

                    if (minimalCurrentPathDistance > currentPathDistance) {
                        minimalCurrentPathDistance = currentPathDistance;
                        for (int i = 0; i < 6; i++)
                            shortesPath[i] = orderOfCitiesInPath[i];
                    }
                }
            }
        }
    }
  }
}
    cout << minimalCurrentPathDistance << endl;
    for (int i = 0;i < 6; i++)
        cout << shortesPath[i] << ' ';
    cout << firstCity << endl;
}


int main() {
    int n;
    cout<<"Enter the No of Cities: " << endl;
    cin>>n;
    if (n>3 && n<7){
    if (n==4){
	int g[4][4];
	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> g[i][j];
        }
    }
    tsp_4(g);
}
if(n==5)
{
	int g[5][5];
	for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> g[i][j];
        }
    }
	tsp_5(g);
}
if(n==6)
{
	int g[6][6];
	for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> g[i][j];
        }
    }
    tsp_6(g);

}
}
else{
	cout<<"Inappropriate n "<< endl;
}
return 0;
}
