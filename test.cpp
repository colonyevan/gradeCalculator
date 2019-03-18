/*
* Name: Evan Colony
* Date: 12/22/2018
* Purpose: Test Suite for all purposuee cause screw class test suites I ain't got no time
* Dependencies: utility.h, GradePartition.h, gradeNeededSimple.h
*/

#include "finalGradeSimple.h"
#include "gradeNeededSimple.h"
#include "utility.h"
#include "GradePartition.h"

#include <iostream>

using namespace std;

void GradePartitionTesting();

int main() {
    GradePartitionTesting();

    system("pause");
    return 0;
}

void GradePartitionTesting() {
    GradePartition test;

    cout << test.getAssignmentPercent(1) << " " << test.getNumberDropable() << " " << test.getNumberReplacable() << " " << test.getNumerOfAssignments() << " " << test.getPercentOfTotal();
    test.setAssignmentPercent(1, 90);
    test.setNumberDropable(2);
    test.setNumberOfAssignments(3);
    test.setNumberReplacable(4);
    test.setPercentOfTotal(5);
    cout << test.getAssignmentPercent(1) << " " << test.getNumberDropable() << " " << test.getNumberReplacable() << " " << test.getNumerOfAssignments() << " " << test.getPercentOfTotal();
}