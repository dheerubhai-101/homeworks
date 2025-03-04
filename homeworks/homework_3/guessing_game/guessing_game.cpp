#include<iostream>
#include<random>
#include<stdio.h>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int min{}, max{}, guess{}, random{}, k{1};

    cout << "Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!" << endl;
    cout << "Please provide the smallest number:" << endl;
    cin >> min;
    cout << "Please provide the largest number:" << endl;
    cin >> max;


    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution<> distribution{min, max};
    random = distribution(random_engine);
    cout << "I've generated a number. Try to guess it!" << endl;
    cout << "Please provide the next guess:";
    cin >> guess;

    while (guess != random){
        if (guess < random)
            cout << "Your number is too small. Try again!" << endl;
        else
            cout << "Your number is too big. Try again!" << endl;
        cout << "Please provide the next guess:";
        cin >> guess;
        k += 1;
        
    }
    printf(" You've done it! You guessed the number %d in %d guesses!", random, k);
}