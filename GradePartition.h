#pragma once
/*
* Name: Evan Colony
* Date: 12/22/2018
* Purpose: Outline of class GradePartition
* Dependencies: 
*/

#include <vector>

class GradePartition {
public:
    GradePartition();
    GradePartition(int assignmentsNum, double totalPercent, double scores[], int numDrops = 0, int numReps = 0);
    ~GradePartition();
    // Getters
    int getNumberReplacable();
    int getNumberDropable();
    int getNumerOfAssignments();
    double getAssignmentPercent(int assignmentNumber);
    double getPercentOfTotal();
    // Setters
    void setNumberReplacable(int replacables);
    void setNumberDropable(int dropable);
    void setNumberOfAssignments(int assignments);
    void setAssignmentPercent(int assignmentNumber, double percent);
    void setPercentOfTotal(double percentage);
private:
    // Vector bound checking
    bool inBounds(int number);

    double percentOfTotal;
    int numberOfAssignments;
    int numberDropable;
    int numberReplacable;
    std::vector<double> percents;
};

