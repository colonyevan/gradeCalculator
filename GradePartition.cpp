/*
* Name: Evan Colony
* Date: 12/22/2018
* Purpose: Implementation of class GradePartition
* Dependencies: GradePartition.h
*/

#include "GradePartition.h"

GradePartition::GradePartition() {
    setNumberOfAssignments(0);
    setPercentOfTotal(0);
    setNumberDropable(0);
    setNumberReplacable(0);
}

GradePartition::GradePartition(int assignmentsNum, double totalPercent, double scores[], int numDrops, int numReps) {
    setNumberOfAssignments(assignmentsNum);
    setPercentOfTotal(totalPercent);
    setNumberDropable(numDrops);
    setNumberReplacable(numReps);
    for (int i = 0; i < numberOfAssignments; i++) {
        setAssignmentPercent(i, scores[i]);
    }
}

GradePartition::~GradePartition() {

}

// Setters and Getters
int GradePartition::getNumberReplacable() {
    return numberReplacable;
}

int GradePartition::getNumberDropable() {
    return numberDropable;
}

int GradePartition::getNumerOfAssignments() {
    return numberOfAssignments;
}

double GradePartition::getAssignmentPercent(int assignmentNumber) {
    return percents.at(assignmentNumber);
}

double GradePartition::getPercentOfTotal() {
    return percentOfTotal;
}

void GradePartition::setNumberReplacable(int replacables) {
    numberReplacable = replacables;
}

void GradePartition::setNumberDropable(int dropable) {
    numberDropable = dropable;
}

void GradePartition::setNumberOfAssignments(int assignemnts) {
    numberOfAssignments = assignemnts;
}

void GradePartition::setAssignmentPercent(int assignmentNumber, double percent) {
    percents.at(assignmentNumber) = percent;
}

void GradePartition::setPercentOfTotal(double percentage) {
    percentOfTotal = percentage;
}

// Bound Checking for Array (maybe useless) Need to optomize by returning statments (no if)
bool GradePartition::inBounds(int number) {
    if (number >= numberOfAssignments || number < 0) {
        return false;
    }
    return true;
}