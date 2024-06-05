#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayDetails() {
        cout << "Student details:\n";
        cout << "Name: " << name << ", Roll Number: " << rollNo << std::endl;
    }
};

class Test : public Student {
protected:
    std::vector<int> subjectScores;

public:
    void addScore(int score) {
        subjectScores.push_back(score);
    }

    int getTotal() {
        int total = 0;
        for (int score : subjectScores) {
            total += score;
        }
        return total;
    }
};

class Result : public Test {
public:
    void displayResultCard() {
        int totalMarks = getTotal();
        float percentage = static_cast<float>(totalMarks) / (subjectScores.size() * 100) * 100;

        cout << "Result Card:\n";
        displayDetails();
        cout << "Total Marks: " << totalMarks << ", Percentage: " << percentage << "%" <<endl;
    }
};

class Sports {
private:
    int sportsScore;

public:
    void setSportsScore(int score) {
        sportsScore = score;
    }

    int getSportsScore() {
        return sportsScore;
    }
};

int main() {
    Result studentResult;
    studentResult.getDetails();

    studentResult.addScore(80);
    studentResult.addScore(90);
    studentResult.addScore(75);

    Sports studentSports;
    studentSports.setSportsScore(85);

    studentResult.displayResultCard();
    cout << "Sports Score: " << studentSports.getSportsScore() <<endl;
    cout<<"\nSatyam Kumar\nRoll No-1323431\n";

    return 0;
}
