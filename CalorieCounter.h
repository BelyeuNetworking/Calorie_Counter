//
// Created by Aaron Belyeu on 10/16/2021.
//

#ifndef HEY_CALORIECOUNTER_H
#define HEY_CALORIECOUNTER_H
#include <iostream>

using namespace std;

void CalCounter()
{
    //increment dialogue
    int numberOfItems, count,
            caloriesForItem, totalCalories;

    cout << "How many items did you eat today? ";
    cin >> numberOfItems;
    totalCalories = 0;
    count = 1;
    cout << "Enter the number of calories in each of the\n"
         << numberOfItems << " items eaten: \n";

    while(count++ <= numberOfItems)
    {
        cin >> caloriesForItem;
        totalCalories = totalCalories
                        + caloriesForItem;
    }

    cout << "Total calories eaten today = "
         << totalCalories << endl;

}


#endif //HEY_CALORIECOUNTER_H
