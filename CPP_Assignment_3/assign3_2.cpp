#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int seconds;

public:
    // Constructors
    Time() : hour(0), minute(0), seconds(0) 
    {

    }

    Time(int h, int m, int s) : hour(h), minute(m), seconds(s) 
    {

    }

    // Getters
    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSeconds() const { return seconds; }

    // Setters
    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    void setSeconds(int s) { seconds = s; }

    // Print time
    void printTime() const 
    {
        std::cout << "Time: " << hour << ":" << minute << ":" << seconds << std::endl;
    }

    // Destructor
    ~Time() 
    {
        std::cout << "Time object destroyed" << std::endl;
    }
};

int main() 
{
    // Dynamically allocate memory for Time object
    Time* timePtr = new Time(10, 30, 45);

    // Testing functionalities
    std::cout << "Hour: " << timePtr->getHour() << std::endl;
    std::cout << "Minute: " << timePtr->getMinute() << std::endl;
    std::cout << "Seconds: " << timePtr->getSeconds() << std::endl;

    // Update time
    timePtr->setHour(11);
    timePtr->setMinute(55);
    timePtr->setSeconds(20);

    // Print updated time
    timePtr->printTime();

    // Deallocate memory
    delete timePtr;

    return 0;
}
