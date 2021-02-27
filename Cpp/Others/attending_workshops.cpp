#include <bits/stdc++.h>
#include <array>
#include <algorithm>
using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshops
{
    int start_time;
    int duration;
    int end_time;
};
struct Available_Workshops
{
    int n;
    std::vector<Workshops> workshops;
};
Available_Workshops *initialize(int *f_startTime, int *f_duration, int n)
{
    Available_Workshops *avWorkshops = new Available_Workshops;
    avWorkshops->n = n;
    Workshops workshop;
    for (int i = 0; i < n; i++)
    {
        workshop.start_time = f_startTime[i];
        workshop.duration = f_duration[i];
        workshop.end_time = f_startTime[i] + f_duration[i];
        avWorkshops->workshops.push_back(workshop);
    }
    return avWorkshops;
}

bool compare(const Workshops &w1, const Workshops &w2)
{
    return w1.end_time > w2.end_time;
}

int CalculateMaxWorkshops(Available_Workshops *f_avWorkshops)
{
    std::vector<Workshops> sortedWorkshops = f_avWorkshops->workshops;
    std::sort(sortedWorkshops.begin(), sortedWorkshops.end(), compare);
    int max{0};
    while (sortedWorkshops.size())
    {
        ++max;
        int end_time = sortedWorkshops.back().end_time;
        bool overlap{true};
        while (sortedWorkshops.size() && overlap)
        {
            sortedWorkshops.pop_back();
            if (sortedWorkshops.back().start_time >= end_time)
            {
                overlap = false;
            }
        }
    }

    return max;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}