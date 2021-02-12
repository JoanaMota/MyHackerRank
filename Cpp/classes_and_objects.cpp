#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
private:
    vector<int> scores;

public:
    Student(){};
    ~Student(){};

    void input(void)
    {
        int score1, score2, score3, score4, score5;
        cin >> score1 >> score2 >> score3 >> score4 >> score5;
        scores.push_back(score1);
        scores.push_back(score2);
        scores.push_back(score3);
        scores.push_back(score4);
        scores.push_back(score5);
    }
    int calculateTotalScore(void)
    {
        int sum = 0;
        for (int i = 0; i < scores.size(); i++)
        {
            sum += scores[i];
        }
        return sum;
    }
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
